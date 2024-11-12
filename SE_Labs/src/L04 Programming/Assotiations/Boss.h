
#pragma once

//	Boss.h
//
//  © 2024 Zoraja Consulting. All rights reserved but even though use it.

#include <iostream>
#include <string>

#include "Mafia.h"

namespace mob {

	class Boss {

	public:
		Boss(std::wstring name) : 
			_name{ name } 
		{
			std::cout << "Boss()" << std::endl;
		}

		virtual std::wstring ToString() const
		{
			return L"Boss (" + _name + L")";
		}

		void SetMafia(Mafia* mafia) { _mafia = mafia; }

		virtual void Order() {
			std::wcout << ToString() + L" is ordering" << std::endl;
			_mafia->DoIt();
		}

		virtual ~Boss() 
		{
			std::cout << "~Boss()" << std::endl;
		}

	private:
		std::wstring _name;
		Mafia* _mafia = nullptr;
	};

}