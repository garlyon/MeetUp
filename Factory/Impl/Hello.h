#pragma once


#include "../SDK/Object.h"


namespace Align
{
  //  Implementation that is not exported from a library, so there is no explicit dependency between DLLs
  struct Hello : public Object
  {
    virtual void hello() override;
  };
}