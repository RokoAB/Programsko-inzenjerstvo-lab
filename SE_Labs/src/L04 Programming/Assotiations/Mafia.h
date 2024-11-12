
#pragma once

//	Mafia.h
//
//  © 2024 Zoraja Consulting. All rights reserved but even though use it.

#include <iostream>
#include <string>

namespace mob {

	class Mafia {

	public:
		Mafia(std::wstring name, std::wstring business) : 
			_name{ name }, 
			_business{ business }
		{
			std::cout << "Mafia()" << std::endl;
		}

		virtual std::wstring ToString() const
		{
			return L"Mafia (" + _name + L")";
		}

		virtual void DoIt() {
			std::wcout << ToString() << L" is doing " + _business << std::endl;
		}

		virtual ~Mafia() 
		{
			std::cout << "~Mafia()" << std::endl;
		}

	private:
		std::wstring _name;
		std::wstring _business;
	};

}