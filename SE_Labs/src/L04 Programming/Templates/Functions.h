
#pragma once

//	Functions.h
//
//  © 2024 Zoraja Consulting. All rights reserved but even though use it.

#include <iostream>

namespace tpl {

	template <typename T>
	T Max(T x, T y) 
	{
		return x > y ? x : y;
	}

}