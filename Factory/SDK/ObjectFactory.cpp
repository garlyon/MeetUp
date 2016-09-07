#include "ObjectFactory.h"


Align::Factory<Align::Object>& Align::GetObjectFactory()
{
  static Factory<Object> s_factory;
  return s_factory;
}

