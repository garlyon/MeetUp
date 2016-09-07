#pragma once


#include "Factory.h"


template <typename T>
Align::Factory<T>& Align::Factory<T>::Get()
{
  static Factory s_factory;
  return s_factory;
}


template <typename T>
struct Align::Factory<T>::Creator
{
  virtual std::unique_ptr<T> create() const = 0;

  virtual ~Creator() = default;
};


template <typename T>
std::unique_ptr<T> Align::Factory<T>::create( const std::string& i_name ) const
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