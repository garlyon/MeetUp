#pragma once

/* Interface.h */

#include "../SDK/Factorable.h"

#ifdef INTERFACE_EXPORTS
  #define EXPORT __declspec( dllexport )
#else
  #define EXPORT __declspec( dllimport )
#endif

namespace Interface_NS
{
  //  Interface class exported from a library
  //  Make it factorable through inheritance
  struct EXPORT Interface
    : public SDK_NS::Factorable<Interface>
  {
    virtual void hello() = 0;
    virtual ~Interface();
  };
}