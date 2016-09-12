#pragma once


#include "Export.h"


namespace Interface_NS
{
  //  Interface class exported from a library
  struct EXPORT Interface
  {
    virtual void hello() = 0;
    virtual ~Interface();
  };
}
