//
//	Person.cpp
//
//  © 2024 Zoraja Consulting. All rights reserved but even though use it.

#include "Person.h"

//#include <print>

#define TRACE_CONSTUCTORS_DESTRUCTORs

using namespace std;

entities::Person::Person(string&& name, string&& lastname, int birthyear)
	: _name (move(name)), _lastname (move(lastname)), _birthyear(birthyear) // Constructor member initializer lists
{
#ifdef TRACE_CONSTUCTORS_DESTRUCTOR
	println("{}() ...", __func__);
#endif 

	// _name = name;
	// _lastname = _lastname;
	//_birthyear = birthyear;
}

entities::Person::~Person()
{
#ifdef TRACE_CONSTUCTORS_DESTRUCTOR
	println("{}() ...", __func__);
#endif 
}

void entities::Person::Print()
{
	println("{} {} is born in {}", _name, _lastname, _birthyear);
}
