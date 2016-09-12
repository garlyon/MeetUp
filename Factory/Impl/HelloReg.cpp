#include "Hello.h"
#include <iostream>
#include "../SDK/Registrator.h"
#include "../Interface/InterfaceFactory.h"  //  used by Registrator


namespace
{
  //  register implementation in the factory, bind with a name
  SDK_NS::Registrator<Impl_NS::Hello> g_reg( "Hello" );
}