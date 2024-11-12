
#pragma once

// Manager.h
//
//  © 2024 Zoraja Consulting. All rights reserved but even though use it.

#include "Employee.h"

namespace com {

	class Manager : public Employee {
	
	public:
		Manager(std::wstring name, double salary) : 
			Employee{ name }, 
			_salary{ salary }
		{
			//std::wcout << L"Manager() " << ToString() << std::endl;
		}

		virtual double CalculatePay() override
		{
			return Employee::CalculatePay() + _salary;
		}

		virtual std::wstring ToString() const override
		{
			return Employee::ToString() + L", " + std::to_wstring(_salary);
		}

		virtual ~Manager()
		{
			//std::wcout << L"~Manager() " << ToString() << std::endl;
		}

	private:
		double _salary;
	};

}