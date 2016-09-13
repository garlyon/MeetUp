#pragma once


#include "Factory.h"
#include <string>


namespace SDK_NS
{
  template <typename T>
  class Record
  {
  public:

    Record( const std::string& i_name ) : d_name{ i_name }
    {
      GetFactory<T>().add<T>( d_name );
    }

    ~Record()
    {
      GetFactory<T>().remove( d_name );
    }

  private:

    std::string d_name;
  };
}
