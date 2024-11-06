//
//	Something.cpp
//
//  © 2024 Zoraja Consulting. All rights reserved but even though use it.

#include <iostream>
#include <print>

#include "Something.h"

using namespace std;
using namespace abc;

Something::Something(int value) : 
	_ptr{ new int{value} }
{
	//cout << "Constructing " << *_ptr << endl;
	println("Constructing {}", *_ptr);
}

Something::Something(const Something& that) : 
	_ptr{ new int{ *that._ptr } }
{
	//cout << "CC " << *_ptr << endl;
	println("CC {}", *_ptr);
}

Something::Something(Something&& that) noexcept : 
	_ptr{ that._ptr }
{
	//cout << "MC " << *_ptr << endl;
	println("MC {}", *_ptr);
	that._ptr = nullptr;
}

Something& Something::operator=(const Something& that)
{
	if (this != &that) {
		if (_ptr != nullptr) delete _ptr;
		_ptr = new int{ *that._ptr };
	}

	//cout << "CAO " << *_ptr << endl;
	println("CAO {}", *_ptr);

	return *this;
}

Something& Something::operator=(Something&& that) noexcept
{
	if (this != &that) {
		if (_ptr != nullptr) delete _ptr;
		_ptr = that._ptr;
		that._ptr = nullptr;
	}

	//cout << "MAO " << *_ptr << endl;
	println("MAO {}", *_ptr);

	return *this;
}

Something::~Something()
{
	//cout << "Destructing " << (_ptr == nullptr ? 0 : *_ptr) << endl;
	println("Destructing {}", ( _ptr==nullptr ? 0 : *_ptr));
	delete _ptr;
}