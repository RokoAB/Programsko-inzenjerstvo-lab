//
//	Functions.cpp
//
//  © 2024 Zoraja Consulting. All rights reserved but even though use it.

#include "Functions.h"

namespace fcs
{
	void Function()
	{
		// Keep going with F11 and observe Call Stack
		Function1();
	}

	void Function1()
	{
		int x{ 1 };
		Function2();
	}

	void Function2()
	{
		int x{ 2 };
		Function3();
	}

	void Function3()
	{
		int x{ 3 };
		Function4();
	}

	void Function4()
	{
		int x{ 1 };
		Function5();
	}

	void Function5()
	{
		int x{ 1 };
		Function6();
	}

	void Function6()
	{
		int x{ 2 };
		Function7();
	}

	void Function7()
	{
		int x{ 3 };
		Function8();
	}

	void Function8()
	{
		int x{ 1 };
	}
}