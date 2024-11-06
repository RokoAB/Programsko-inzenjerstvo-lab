//
//	Program.cpp
//
//  © 2024 Zoraja Consulting. All rights reserved but even though use it.

#include <iostream>
#include <print>

#include "Something.h"

using namespace abc;
using namespace std;

int main()
{
	Something a{ 1 };
	Something b{ 2 };
	Something c{ 3 };

	//cout << endl;
	println("");

	Something d{ a };
	a = c;
	Something e{ move (c) };
	e = move(d);

	//cout << endl;
	println("");

	return 0;
}