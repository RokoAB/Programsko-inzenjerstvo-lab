//
//	Program.cpp
//
//  © 2024 Zoraja Consulting. All rights reserved but even though use it.

#define _SILENCE_CXX17_CODECVT_HEADER_DEPRECATION_WARNING
#include <iostream>
#include <string>
#include <memory>

#include "../Common/Helpers.h"
#include "Something.h"

using namespace std;
using namespace abc;

int main()
{
	SetUTF8(wcout);

	auto s = make_shared<Something>(wstring(L"Table"));
	wcout << "s: " << s->Name() << ", " << s.use_count() << endl;

	/* auto s1{ move(s) }; */
	auto s1{ s };
	wcout << "s1: " << (*s1).Name() << ", " << s1.use_count() << endl;

	auto s2{ s1 };
	wcout << "s2: " << s2.operator->()->Name() << ", " << s2.use_count() << endl;

	weak_ptr<Something> w{ s2 };
	//auto name = w->Name();
	wcout << "w: " << w.use_count() << endl;

	wcout << endl;

	auto u = make_unique<Something>(L"Šešir");
	wcout << "u: " << (*u).Name() << endl;

	//auto u1{ u };
	auto u1{ move(u) };
	wcout << "u1: " << u1->Name() << endl;
	//wcout << "u: " << u->Name() << endl;

	auto u2 = move(u1);
	wcout << "u2: " << u2.operator*().Name() << endl;
	//wcout << "u1: " << u1->Name() << endl;

	wcout << endl;
}