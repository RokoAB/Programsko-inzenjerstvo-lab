//
//	Program.cpp
//
//  © 2024 Zoraja Consulting. All rights reserved but even though use it.

#define _SILENCE_CXX17_CODECVT_HEADER_DEPRECATION_WARNING
#include <iostream>
#include <string>

#include "../Common/Helpers.h"
#include "Functions.h"
#include "Stack.h"
#include "Variadic.h"

using namespace std;
using namespace tpl;

template<typename T>
using WStack_t = Stack<T, 4>;

int main()
{
	SetUTF8(wcout);

	int a = 1;
	int b = 2;
	auto c = Max(a, b);
	cout << "c: " << c << endl;

	wstring w1 = L"Ivo";
	wstring w2 = L"Zoi";
	auto w = Max(w1, w2);
	wcout << "w: " << w << endl;

	cout << endl;

	Stack<int, 10> istack;
	for (int i=0; i<8; ++i) istack.Push(i);

	//for (int i = 0; i < 8; ++i) {
	//	cout << istack.Top() << endl;
	//	istack.Pop();
	//}

	Show(istack, 8);

	WStack_t<wstring> wstack;
	wstack.Push(L"Ana");
	wstack.Push(L"Zoi");
	wstack.Push(L"Žak");

	cout << endl;

	//for (int i = 0; i < 3; ++i) {
	//	wcout << wstack.Top() << endl;
	//	wstack.Pop();
	//}

	Show(wstack, 3);

	cout << endl;

	Print(1);
	Print(1, 2.0);
	Print(wstring(L"Iva"), 1, 3.14, wstring(L"Šef"));

	return 0;
}