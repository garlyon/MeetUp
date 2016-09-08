#pragma once


#include "SDK.h"


namespace Align
{
  //  Interface class exported from a library
  //  We'll make it factorable
  struct EXPORT Object
  {
    virtual void hello() = 0;
    virtual ~Object();
  };
}