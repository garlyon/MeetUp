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
  public:

    //  construct derived class instance by name
    std::unique_ptr<T>            create( const std::string& ) const;

    //  make derived class X constructible by name
    template <typename X> void    reg( const std::string& );
    void                          unreg( const std::string& );

  private:

    struct Creator;

    std::unordered_map<std::string, std::unique_ptr<Creator>> d_collection;
  };
}


#include "Factory.inl"