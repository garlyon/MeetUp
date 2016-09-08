#pragma once


#include "Registrator.h"
#include "Factory.h"


template <typename T>
SDK_NS::Registrator<T>::Registrator( const std::string& name ) : d_name{ name }
{
  T::GetFactory().add<T>( d_name );
}


template <typename T>
SDK_NS::Registrator<T>::~Registrator()
{
  T::GetFactory().remove( d_name );
}