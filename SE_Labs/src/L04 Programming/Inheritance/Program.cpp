
//	Program.cpp
//
//  © 2024 Zoraja Consulting. All rights reserved but even though use it.

#define _SILENCE_CXX17_CODECVT_HEADER_DEPRECATION_WARNING
#include <vector>
#include <iostream>
#include <typeinfo>

#include "../Common/Helpers.h"
#include "Employee.h"
#include "Worker.h"
#include "Manager.h"

using namespace std;
using namespace com;

int main()
{
	SetUTF8(wcout);

	auto manager = new Manager{ L"Šef", 10000.0 };
	// typeid() ignores cvr-qualifiers (const, volatile, reference)
	// so typeid(T)==typeid(const T)
	cout << "Type: " << typeid(*manager).name() << endl;
	
	cout << endl;

	vector<Employee*> stuff;
	stuff.push_back(manager);
	stuff.push_back(new Worker{ L"Ana", 100.0, 176 });
	stuff.push_back(new Worker{ L"Zoi", 200.0, 176 });
	stuff.push_back(new Worker{ L"Žak", 300.0, 176 });
	
	cout << "Stuff: " << endl;
	for (const auto& e : stuff) wcout << e->ToString() << endl;
	
	double total = 0.0;
	for (const auto& e : stuff) total += e->CalculatePay();
	cout << "Total: " << to_string(total) << endl;

	cout << endl;

	auto employee = new Employee{ L"Džo" };
//	manager = employee;
	delete employee;

	employee = manager;
	cout << "Pay: " << to_string(employee->CalculatePay()) << endl;

	for (const auto& p : stuff) delete p;

	// std::wstring can not implicitely be converted to Employee
	//Employee e = wstring(L"Špiro");

	return 0;
}