//
//	Calculator.cpp
//
//  © 2024 Zoraja Consulting. All rights reserved but even though use it.

#include "Calculator.h"

//#include <print>

using namespace std;

float math::Calcuator::Add(float a, float b)
{
	return a+b;
}

float math::Calcuator::Sub(float a, float b)
{
	return a-b;
}

float math::Calcuator::Mul(float a, float b)
{
	return a+b;
}

float math::Calcuator::Div(float a, float b)
{
	if (b != 0.0f)
	{
		return a / b;
	}
	else
	{
		//print("CANT DIVIDE WITH ZERO, RETURN {}/1.0 = ", a);
		b = 1.0f;
		return a / b;
	}
}
