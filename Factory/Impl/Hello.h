#pragma once


#include "../Interface/Interface.h"


namespace Impl_NS
{
  //  Implementation that is not exported from a library,
  //  so there is no explicit dependency between DLLs
  struct Hello : public Interface_NS::Interface
  {
    virtual void hello() override;
  };
}