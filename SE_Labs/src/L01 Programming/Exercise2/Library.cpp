//
//	Library.cpp
//
//  © 2024 Zoraja Consulting. All rights reserved but even though use it.

#include "Library.h"

namespace lib
{
	void DoSomething()
	{
		// Continue debugging with F10 and observe locals
		int a{ 1 };
		a = 3;

		a++;

		if (a > 3)
		{
			a = 3;
		}
		else
		{
			a = 10;
		}

		// Step out (Shift+F11)
		int z{ 3 };
	}

	void Iterate()
	{
		// Here press continue button to skip long loop
		const int big_size = 1000;
		for (int i = 0; i < big_size; i++)
		{
			// Do work
		}

		// Continue with F10
		int x{ 0 };
		x = 321;
	}
}