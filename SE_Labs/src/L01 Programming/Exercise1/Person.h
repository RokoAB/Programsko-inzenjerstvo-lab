//
//	Person.h
//
//  © 2024 Zoraja Consulting. All rights reserved but even though use it.

#pragma once

#include<string>

namespace entities
{
	class Person
	{
	public:

		Person(std::string&&, std::string&&, int);
		~Person();

		void Print();
	
	private:
		std::string _name;
		std::string _lastname;
		int _birthyear;
	};
}