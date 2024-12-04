//
//	Program.cpp
//
//  © 2024 Zoraja Consulting. All rights reserved but even though use it.

#include <iostream>

#include "Templates.h"

using namespace std;
using namespace vtl;
using namespace std::string_literals;

int main() 
{
	Log(1, 2, L"main() called"s, L"with: "s);
	Log(L"main() returns"s, L"with: 0"s);

	return 0;
}