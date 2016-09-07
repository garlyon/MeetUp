#pragma once


#include <memory>
#include <string>


namespace Align
{
  template <typename T>
  class Factory
  {
  public:

    static std::unique_ptr<T> Create( const std::string& );
  };
}

#include "Factory.inl"