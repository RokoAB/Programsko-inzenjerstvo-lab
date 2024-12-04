
#pragma once

//	Functions.h
//
//  © 2024 Zoraja Consulting. All rights reserved but even though use it.

#include <iostream>
#include <string>

#include "../Operators/Smart Pointer.h"

namespace abc {

	void f(int& l)
	{
		std::cout << "f(l): " << l << std::endl;
	}

	void f(int&& r)
	{
		std::cout << "f(r): " << r << std::endl;
	}

	template <typename T>
	//inline void Forward(T& t)
	inline void Forward(T&& u)
	{
		std::cout << "Forward(u): " << u << std::endl;
		//f(u);
		//f(std::move(u));
		f(std::forward<T>(u));
	}

	template <typename T, typename... Ts>
	inline mem::SmartPtr<T> MakeSmart(Ts&&... rest)
	{
		auto count = sizeof...(rest);
		//auto text = " parameter" + (count != 1 ? "s" : "");
		auto text = std::string(" parameter") + (count != 1 ? "s" : "");
		std::cout << "MakeSmart(): " << count << text << std::endl;

		//Purfect - Del Boy 
		auto t = new T(std::forward<Ts>(rest)...);
		return mem::SmartPtr<T>(t);
	}

}