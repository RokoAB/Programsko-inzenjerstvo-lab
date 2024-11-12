
#pragma once

// Worker.h
//
//  © 2024 Zoraja Consulting. All rights reserved but even though use it.

#include "Employee.h"

namespace com {

	class Worker : public Employee {

	public:
		Worker(std::wstring name, double wage, int hours) : 
			Employee{ name }, 
			_wage{ wage }, 
			_hours{ hours }
		{
			//std::wcout << L"Worker() " << ToString() << std::endl;
		}

		virtual double CalculatePay() override
		{
			return Employee::CalculatePay() + _wage * _hours;
		}

		virtual std::wstring ToString() const override
		{
			return Employee::ToString() + L", " + std::to_wstring(_wage * _hours);
		}

		virtual ~Worker()
		{
			//std::wcout << L"~Worker() " << ToString() << std::endl;
		}

	private:
		double _wage;
		int _hours;
	};

}