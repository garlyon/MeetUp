#pragma once


#include <string>


namespace SDK_NS
{
  template <typename T>
  class Registrator
  {
  public:

    Registrator( const std::string& );
    ~Registrator();

  private:

    std::string d_name;
  };
}


#include "Registrator.inl"