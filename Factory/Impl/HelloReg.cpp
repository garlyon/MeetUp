#include "../SDK/Registrator.h"
#include "Hello.h"


namespace
{
  Align::Registrator<Align::Hello, Align::Object> g_reg( "Hello" );
}