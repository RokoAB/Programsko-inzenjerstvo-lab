
#pragma once

// Employee.h
//
//  © 2024 Zoraja Consulting. All rights reserved but even though use it.

#include <iostream>
#include <string>

namespace com {

	class Employee {

	private:
		std::wstring _name;

	public:
		//	Employee(std::wstring name) :
		// Now, wstrings can not implicitely be converted to Employees
		explicit Employee(std::wstring name) : 
			_name{ name } 
		{
			//std::wcout << L"Employee() " << ToString() << std::endl;
		}

		virtual double CalculatePay() { return 0.0; }

		virtual std::wstring ToString() const { return _name; }

		//virtual ~Employee() = 0;
		virtual ~Employee();
	};

	Employee::~Employee()
	{
		std::wcout << L"~Employee() " << ToString() << std::endl;
	}

}