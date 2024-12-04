
#pragma once

//	Types.h
//
//  � 2024 Zoraja Consulting. All rights reserved but even though use it.

#include <iostream>
#include <string>

namespace abc {

	struct Something {

		Something(int)
		{
			std::cout << "Something() " << std::endl;
		}

		~Something()
		{
			std::wcout << "~Something()" << std::endl;
		}
	};

	struct Ne�to {

		Ne�to(int, double, std::wstring)
		{
			std::wcout << L"Ne�to()" << std::endl;
		}

		~Ne�to()
		{
			std::wcout << L"~Ne�to()" << std::endl;
		}
	};

}