#include "../SDK/Registrator.h"
#include "Hello.h"


namespace
{
  //  register implementation in the factory, bind with a name
  Align::Registrator<Align::Hello, Align::Object> g_reg( "Hello" );
}