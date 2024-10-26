//
//	Program.cpp
//
//  © 2024 Zoraja Consulting. All rights reserved but even though use it.

#include "Functions.h"
#include "Calculator.h"
#include "Library.h"

//#include <print>
#include <iostream>
#include <string> 

using namespace std;
using namespace math;
using namespace fcs;
using namespace lib;

int gv { 2 }; 

int main()
{
	// Before start debugging, set two breakpoints on lines 25 and 105 !
	// Press F5 for start debugging and follow instructions in comments

	// Step over with (F10) and observe Locals
	const int x{ 3 };
	
	//x++;
	//x = 3;

	int y{ x };
	y++;
	
	int z{ y - x };
	--z;

	// Step into DoSomething (F11) 
	DoSomething();

	string streambuffer{};
	//print("Enter something: ");
	// After this line you need input something in console to continue debugging !
	cin >> streambuffer;

	// Step into Function (F11) and observe Call Stack
	Function();

	// Step over (F10)
	Function();

	// Here select line 62, then Ctrl+F10 to skip following code instructions
	int temp{ 12 };

	//println("Result of 1.25+2.75 = {}", Calcuator::Add(1.25f, 2.75f));
	//println("Result of 12.7-2.7 = {}", Calcuator::Sub(12.7f, 2.7f));
	//println("Result of 1.63*2.7 = {}", Calcuator::Mul(1.63f, 2.7f));
	//println("Result of 1.63/0 = {}", Calcuator::Div(1.63f, 0.0f));

	// Continue with F10
	temp = 24;

	// Step into Iterate (F11)
	Iterate();
	
	return 0;
}