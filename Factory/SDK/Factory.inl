#pragma once


#include "Factory.h"


/* Factory.inl */

template <typename T>
struct SDK_NS::Factory<T>::Creator
{
  virtual std::unique_ptr<T> create() const = 0;
  virtual ~Creator() = default;
};


template <typename T>
std::unique_ptr<T> SDK_NS::Factory<T>::create(
  const std::string& i_name ) const
{
  auto f = d_collection.find( i_name );

  if( f != d_collection.end() && f->second )
  {
    return f->second->create();
  }
  else
  {
    return{};
  }
}


template <typename T> template <typename X>
void SDK_NS::Factory<T>::add( const std::string& i_name )
{
  struct Impl : public Creator
  {
    virtual std::unique_ptr<T> create() const override
    {
      return std::make_unique<X>();
    }
  };

  d_collection.emplace( i_name, std::make_unique<Impl>() );
}


template <typename T>
void SDK_NS::Factory<T>::remove( const std::string& name )
{
  d_collection.erase( name );
}