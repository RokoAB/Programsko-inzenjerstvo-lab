
#pragma once

//	Factory.h
//  
//  © 2024 Zoraja Consulting. All rights reserved but even though use it.

#include <cassert>

#include "IAccount.h"
#include "Account.h"

namespace fin {

	inline IAccount* CreateAccount(double balance)
	{
		return new Account(balance);
	}

	// COM Like
	inline void CreateAccount(IAccount** pp, double balance)
	{
		*pp = new Account(balance);
	}

	// Unit-test like
	inline void TestAccount(IAccount* p, double a, double b)
	{
		auto x = p->Balance();
		std::cout << "Balance: " << x << std::endl;

		p->Deposit(a);
		p->Withdraw(b);

		auto y = p->Balance();
		std::cout << "Balance: " << y << std::endl;

		assert(x==y);
	}
	
}