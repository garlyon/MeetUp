#pragma once


#include "../SDK/Object.h"


namespace Align
{
  struct Hello : public Object
  {
    virtual void hello() override;
  };
}