#pragma once


#include "Factory.h"
#include <string>


namespace SDK_NS
{
  template <typename T>
  class Registrator
  {
  public:

    Registrator( const std::string& i_name ) : d_name{ i_name }
    {
      T::GetFactory().add<T>( d_name );
    }

    ~Registrator()
    {
      T::GetFactory().remove( d_name );
    }

  private:

    std::string d_name;
  };
}
