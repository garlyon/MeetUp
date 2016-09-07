#pragma once


#include "Factory.h"


template <typename T>
std::unique_ptr<T> Align::Factory<T>::Create( const std::string& )
{
  return{};
}