#include "../SDK/ObjectFactory.h"
#include "Hello.h"


namespace
{
  int g_reg = ( Align::GetObjectFactory().regist<Align::Hello>( "Hello" ), 42 );
}