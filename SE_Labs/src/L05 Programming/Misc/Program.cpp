
//	Program.cpp
//
//  © 2024 Zoraja Consulting. All rights reserved but even though use it.

#define _SILENCE_CXX17_CODECVT_HEADER_DEPRECATION_WARNING
#include <iostream>

#include "Functions.h"
#include "Types.h"
#include "../Common/Helpers.h"

using namespace std;
using namespace abc;

int main()
{
	SetUTF8(wcout);

	int a = 1;
	int& l = a;
	f(l);
	int&& r = 2;
	f(r);
	f(int{ 3 });

	cout << endl;

	Forward(a);
	Forward(int{ 2 });

	cout << endl;

	auto something = MakeSmart<Something>(1);
	cout << endl;

	auto nešto = MakeSmart<Nešto>(1, 3.24, L"Zoi");
	cout << endl;

	return 0;
}