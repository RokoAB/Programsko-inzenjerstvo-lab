
#pragma once

//	IAccount.h
//  
//  © 2024 Zoraja Consulting. All rights reserved but even though use it.

#include <iostream>

namespace fin {

	struct IAccount 
	{
		virtual bool Deposit(double) = 0;
		virtual bool Withdraw(double) = 0;
		virtual void Balance(double) = 0;
		virtual double Balance() const = 0;

		virtual ~IAccount() = 0;
	};

	inline IAccount::~IAccount()
	{
		std::cout << __func__ << "()" << std::endl;
	}

}