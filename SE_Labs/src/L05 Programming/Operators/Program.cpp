
//	Program.cpp
//
//  © 2019 Zoraja Consulting. All rights reserved but even though use it.

#include <iostream>

#include "Something.h"
#include "Smart Pointer.h"

using namespace std;
using namespace abc;
using namespace mem;

int main()
{
	try {
		auto p = new Something(1);
		auto q = new Something(2);
		cout << endl;

		SmartPtr<Something> sp{ new Something(10) };
		SmartPtr<Something> sq{ new Something(20) };
	
		// yes, two arrows are required!
		sp.operator->()->m();
		//sp->m();
		
		sq.operator*().m();
		//(*sq).m();
		
		cout << endl;

		sq.operator=(sp);
		//sq = sp;

		sq->m();
		//sp->m();
		cout << endl;

		throw std::exception("exception()");

	} catch (exception& e) {
		cout << e.what() << " caught." << endl;
	}

	return 0;
}