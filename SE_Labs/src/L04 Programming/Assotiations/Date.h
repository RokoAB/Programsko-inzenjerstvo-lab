
#pragma once

//	Date.h
//
//  © 2024 Zoraja Consulting. All rights reserved but even though use it.

#include <iostream>
#include <string>

namespace abc {

	struct Date {

		Date(int d, int m, int y) :
			day{d},
			month{m},
			year{y}
		{
			std::cout << "Date()" << std::endl;
		}

		virtual ~Date()
		{
			std::cout << "~Date()" << std::endl;
		}

	//private:
		int day, month, year;
	};
}