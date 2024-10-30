//
//	Circle.h
//
//  © 2024 Zoraja Consulting. All rights reserved but even though use it.

#pragma once

#include <string>

namespace abc {

	class Circle {

	public:
		Circle(double = 1.0);

		virtual double Area() const;
		virtual std::string ToString() const;

		virtual ~Circle();

	//private:
		double _radius;
	};

	Circle f(Circle);
	void g(Circle*);
	Circle* h();

}