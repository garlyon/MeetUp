#pragma once


/* Factory.h */

#include <memory>
#include <string>
#include <unordered_map>

namespace SDK_NS
{
  //  Factory creates instance of interface implementation
  //  by implementation name.
  template <typename T>
  class Factory
  {
    struct Creator;

  public:

    //  construct derived class instance by name
    std::unique_ptr<T> create( const std::string& ) const;

    //  make derived class X constructible by name
    template <typename X>
    void add( const std::string& );

    //  no longer construct object by given name
    void remove( const std::string& );

  private:

    std::unordered_map<
      std::string,
      std::unique_ptr<Creator>> d_collection;
  };


  template <typename T>
  Factory<T>& GetFactory() { return T::GetFactory(); }
}

#include "Factory.inl"