#include "../SDK/Registrator.h"
#include "Hello.h"


namespace
{
  //  register implementation in the factory, bind with a name
  SDK_NS::Registrator<Impl_NS::Hello, Interface_NS::Object> g_reg( "Hello" );
}