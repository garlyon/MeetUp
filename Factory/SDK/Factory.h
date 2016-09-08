#pragma once


#include <memory>
#include <string>
#include <unordered_map>


namespace Align
{
  //  Factory template class creates 
  template <typename T>
  class Factory
  {
    struct Creator;

  public:

    //  construct derived class instance by name
    std::unique_ptr<T>            create( const std::string& ) const;

    //  make derived class X constructible by name
    template <typename X> void    add( const std::string& );

    //  do not construct object associated with given name
    void                          remove( const std::string& );

  private:

    std::unordered_map<std::string, std::unique_ptr<Creator>> d_collection;
  };


  template <typename T> Factory<T>& GetFactory();
}


#include "Factory.inl"