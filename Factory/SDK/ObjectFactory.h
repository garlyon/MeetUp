#pragma once


#include "Factory.h"
#include "Object.h"
#include "SDK.h"


namespace Align
{
  EXPORT Factory<Object>& GetObjectFactory();
}