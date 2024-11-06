//
//	Something.h
//
//  © 2024 Zoraja Consulting. All rights reserved but even though use it.

#pragma once

#include <string>

namespace abc {

	class Something {

	public:
		Something(std::wstring name) :
			_name{name}
		{
			std::wcout << "Something(" << _name << ")" << std::endl;
		}

		auto Name() const { return _name; }

		virtual ~Something()
		{
			std::wcout << "~Something(" << _name << ")" << std::endl;
		}

	private:
		std::wstring _name;
	};

}