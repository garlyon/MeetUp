#pragma once


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
  struct EXPORT Object : public SDK_NS::Factorable<Object>
  {
    virtual void hello() = 0;
    virtual ~Object();
  };
}