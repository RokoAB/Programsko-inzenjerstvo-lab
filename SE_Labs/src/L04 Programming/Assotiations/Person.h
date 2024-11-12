
#pragma once

//	Person.h
//
//  © 2024 Zoraja Consulting. All rights reserved but even though use it.

#include <iostream>
#include <string>

#include "Date.h"

namespace abc {

	struct Person {
		
		Person(std::wstring name, int d, int m, int y) :
			_name{name},
			_birthday{d, m, y}
		{
			std::cout << "Person()" << std::endl;
		}

		virtual ~Person()
		{
			std::cout << "~Person()" << std::endl;
		}

	//private:
		std::wstring _name;
		const Date _birthday;
	};

}