#pragma once


#include "Registrator.h"
#include "Factory.h"


template <typename Derived, typename Base>
Align::Registrator<Derived, Base>::Registrator( const std::string& name ) : d_name{ name }
{
  GetFactory<Base>().add<Derived>( d_name );
}


template <typename Derived, typename Base>
Align::Registrator<Derived, Base>::~Registrator()
{
  GetFactory<Base>().remove( d_name );
}