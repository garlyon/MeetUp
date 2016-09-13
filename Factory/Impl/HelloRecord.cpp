#include "Hello.h"
#include <iostream>
#include "../SDK/Record.h"
#include "../Interface/InterfaceFactory.h"  //  used by Record


namespace
{
  //  register implementation in the factory, bind with a name
  SDK_NS::Record<Impl_NS::Hello> g_rec( "Hello" );
}