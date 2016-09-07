#pragma once


#include <memory>
#include <string>
#include <unordered_map>


namespace Align
{
  template <typename T>
  class Factory
  {
    struct Creator;

  public:

    static Factory& Get();

  public:

    std::unique_ptr<T> create( const std::string& ) const;

    template <typename X> void reg( const std::string& );

  private:

    std::unordered_map<std::string, std::unique_ptr<Creator>> d_collection;
  };
}


#define REGISTER( derived, base, name )                                       \
namespace                                                                     \
{                                                                             \
  int s_factory_reg = (                                                       \
    ::Align::Factory<base>::Get().reg<derived>( name ),                       \
    0 );                                                                      \
}


#include "Factory.inl"