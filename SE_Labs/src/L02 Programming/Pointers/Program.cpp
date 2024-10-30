//
//	Program.cpp
//
//  © 2024 Zoraja Consulting. All rights reserved but even though use it.

#include <iostream>
#include <print>

#include "Something.h"

using namespace std;
using namespace abc;

int main()
{
	int u = 1;
	int v = 2;
	//cout << "v:" << v << endl << endl;
	println("v: {}", v);
	println("");

	int* p = &v;
	(*p)++;
	//cout << "v:" << v << endl;
	println("v: {}", v);

	//int* p = &100;
	//const int* cp = &100;

	int& l = v;
	/* l = u; */
	//const int& l = v;
	l++;
	//cout << "v:" << v << endl;
	println("v: {}", v);

	//int& l = 100;
	const int& cl = 100;
	//cl++;
	//cout << "cl:" << v << endl;
	println("cl {}", cl);

	int&& r = 100;
	r++;
	//cout << "r:" << r << endl;
	println("r: {}", r);
	//int&& r1 = v;
	int&& r1 = static_cast<int&&>(v);
	int&& r2 = move(v);
	r2++;
	//cout << "v:" << v << endl << endl;
	println("v: {}", v);
	Something a{ 7 };
	f(a);
	//cout << endl;
	println("");
	f(Something{ 17 });
	//cout << endl;
	println("");

	g(Something{ 23 });
	//cout << endl;
	println("");
	g(move(a));

	//cout << endl;
	println("");

	h(a);
	//cout << endl;
	println("");
	h(Something{ 33 });
	h(move(a));

	//cout << endl;
	println("");

	return 0;
}