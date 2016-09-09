#pragma once


/* Factorable.h */

#include "Factory.h"

namespace SDK_NS
{
  template <typename T>
  struct Factorable
  {
    static Factory<T>& GetFactory()
    {
      static Factory<T> s_factory;
      return s_factory;
    }

  protected:

    ~Factorable() = default;
  };
}