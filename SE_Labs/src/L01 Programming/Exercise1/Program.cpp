//
//	Program.cpp
//
//  © 2024 Zoraja Consulting. All rights reserved but even though use it.

#include "Person.h"
#include "Library.h"

#include <print>

using namespace std;
using namespace entities;
using namespace lib;

Person per3{ "Ivo", "Ivic", 1999 };

int main()
{
	//print("Program started\n");
	println("Program started");

	Person per1("Ana", "Anic", 1990);
	Person per2{ "Mate", "Matic", 2001 };

	per1.Print();
	per2.Print();

	int a = 2;
	int b{ 3 };

	int c = Add(a, b);
	PrintNumber(c);

	println("Program ended");
	return 0;
}