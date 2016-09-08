#pragma once


#include "../Interface/Object.h"


namespace Impl_NS
{
  //  Implementation that is not exported from a library, so there is no explicit dependency between DLLs
  struct Hello : public Interface_NS::Object
  {
    virtual void hello() override;
  };
}