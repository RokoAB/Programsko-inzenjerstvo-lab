
#pragma once

//	Types.h
//
//  © 2024 Zoraja Consulting. All rights reserved but even though use it.

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

	struct Nešto {

		Nešto(int, double, std::wstring)
		{
			std::wcout << L"Nešto()" << std::endl;
		}

		~Nešto()
		{
			std::wcout << L"~Nešto()" << std::endl;
		}
	};

}