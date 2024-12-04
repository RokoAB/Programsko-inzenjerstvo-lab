
#pragma once

//	Variadic.h
//  
//  © 2024 Zoraja Consulting. All rights reserved but even though use it. 


#include <iostream>

namespace tpl {

	inline void Print()
	{
		std::cout << std::endl;
	}

	template <typename T, typename... Ts>
	inline void Print(T head, Ts... rest)
	{
		std::wcout << head << L" ";
		Print(rest...);
	}

}