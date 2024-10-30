//	Something.h
//
//  © 2024 Zoraja Consulting. All rights reserved but even though use it.

#pragma once

#include <iostream>
#include <print>

namespace abc {

	class Something {

	public:
		Something(int value = -1) :
			value{ value } 
		{
			//std::cout << "Constructing " << value << std::endl;
			std::println("Constructing {}", value);
		}

		virtual ~Something()
		{
			//std::cout << "Destructing " << value << std::endl;
			std::println("Destructing {}", value);
		}

	public:
		int value;
	};

	void f(const Something& l)
	{
		//std::cout << "f(l) value: " << l.value << std::endl;
		std::println("f(l) value: {}", l.value);
		//l.value++;
	}

	void g(Something&& r) 
	{
		r.value++;
		//std::cout << "g(r) value: " << r.value << std::endl;
		std::println("g(r) value: {}", r.value);
	}

	void h(const Something& l)
	//void h(Something& l)
	{
		//std::cout << "h(l) value: " << l.value << std::endl;
		std::println("h(l) value: {}", l.value);
		//l.value++;
	}

	//void h(Something&& r)
	//{
	//	r.value++;
	//	std::cout << "h(r) value: " << r.value << std::endl;
	//	std::println("h(r) value: {}", r.value);
	//}

}