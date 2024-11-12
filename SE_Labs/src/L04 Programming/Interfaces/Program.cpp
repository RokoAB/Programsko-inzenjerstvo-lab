//
//	Program.cpp
//  
//  © 2024 Zoraja Consulting. All rights reserved but even though use it.

#include <iostream>

#include "IAccount.h"
#include "Factory.h"

using namespace std;
using namespace fin;

int main()
{
	auto account = CreateAccount(100.0);
	TestAccount(account, 100.0, 100.0);
	delete account;

	cout << endl;

	CreateAccount(&account, 1000.0);
	TestAccount(account, 100.0, 100.0);
	delete account;

	return 0;
}