#pragma once


#include <string>


namespace Align
{
  template <typename Derived, typename Base>
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