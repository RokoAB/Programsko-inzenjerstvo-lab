//
//	Program.cpp
//
//  © 2024 Zoraja Consulting. All rights reserved but even though use it.

#define _SILENCE_CXX17_CODECVT_HEADER_DEPRECATION_WARNING
#include <iostream>
#include <print>

#include "Circle.h"
#include "Helpers.h"

using namespace abc;
using namespace std;

//Circle a();
//Circle a; 
Circle a{};

int main()
{
	SetUTF8(wcout);
	wcout << L"Zuji , zveči , zvoni , zvuči \nŠumi, grmi, tutnji, huči \n..." << endl << endl;

	double result = a.Area();
	wcout << "Area: " << result << endl;

	double radius;
	//cout << "Enter the radius: ";
	print("Enter the radius: ");
	try {
		cin >> radius;
		if (cin.fail()) throw invalid_argument("Wrong input data");

		//static Circle b{ radius };
		Circle b{ radius };
		result = b.Area();
		//cout << "Area: " << result << endl;
		println("Area: {}", result);

	}
	catch (invalid_argument e) {
		cout << e.what() << endl;
		return -1;
	}
	cout << endl;

	auto c = f(a);
	//cout << "Area: " << c.Area() << endl;
	println("Area: {}", c.Area());

	// cout << endl;
	println("");

	Circle* const p = new Circle{ 3.0 };
	g(p);
	delete p;
	cout << endl;

	Circle* q = h();
	//cout << "Area: " << q->Area() << endl;
	println("Area: {}", q->Area());
	delete q;

	//cout << endl;
	println("");

	return 0;
}