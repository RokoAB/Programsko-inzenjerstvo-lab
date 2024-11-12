//
//	Program.cpp
//
//  © 2024 Zoraja Consulting. All rights reserved but even though use it.

#define _SILENCE_CXX17_CODECVT_HEADER_DEPRECATION_WARNING
#include "Mafia.h"
#include "Boss.h"
#include "../Common/Helpers.h"

#include "Person.h"

using namespace std;
using namespace mob;
using namespace abc;

Boss boss{ L"Vito" };

int main()
{
	SetUTF8(wcout);

	auto mafia = new Mafia{ L"Naša", L"Igračke" };

	boss.SetMafia(mafia);
	boss.Order();

	delete mafia;

	cout << endl;

	Person(L"Zoi", 19, 6, 1978);

	return 0;
}