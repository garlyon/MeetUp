#include "../SDK/ObjectFactory.h"
#include "Hello.h"


namespace
{
  struct Reg
  {
    Reg() { Align::GetObjectFactory().reg<Align::Hello>( "Hello" ); }
    ~Reg() { Align::GetObjectFactory().unreg( "Hello" ); }
  } g_reg;
}