//
//	Circle.cpp
//
//  © 2024 Zoraja Consulting. All rights reserved but even though use it.

#include <iostream>
#include <string>
#include <print>

#include "Circle.h"

using namespace std;
using namespace abc;

constexpr double pi{ 3.1415926535897 };

Circle::Circle(double radius) : 
	_radius{ radius }
{
	//cout << "Constructing " << ToString() << endl;
	println("Constructing {} ", ToString());
}

double Circle::Area() const
{
	return _radius * _radius * pi;
}

string Circle::ToString() const
{
	return "Circle (" + to_string(_radius) + ")";
}

Circle::~Circle()
{
	//cout << "Destroying " << ToString() << endl;
	println("Destroying {} ", ToString());
}

Circle abc::f(Circle circle)
{
	Circle x = circle;
	x._radius = x._radius + 10;

	return x;
}

void abc::g(Circle* circle)
{
	circle->_radius = circle->_radius + 100;

	//cout << "Area: " << circle->Area() << endl;
	println("Area: {} ", circle->Area());

}

Circle* abc::h() {
	//Circle circle{};
	//return &circle;

	return new Circle{ 4.0 }; 
}