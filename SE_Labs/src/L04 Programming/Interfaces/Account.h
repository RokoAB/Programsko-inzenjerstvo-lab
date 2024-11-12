
#pragma once

//	Account.h
//  
//  © 2024 Zoraja Consulting. All rights reserved but even though use it.

#include <iostream>

#include "IAccount.h"

namespace fin {

	class Account : public IAccount {

	public:
		Account(double balance) :
			_balance{balance}
		{
			std::cout << __func__ << "(" << _balance << ")" << std::endl;
		}
	
		virtual bool Deposit(double amount) override 
		{ 
			_balance += amount;
			return true;
		}

		virtual bool Withdraw(double amount) override
		{
			_balance -= amount;
			return true;
		}

		virtual void Balance(double balance) override
		{
			_balance = balance;
		}

		virtual double Balance() const override
		{
			return _balance;
		}

		virtual ~Account() 
		{
			std::cout << __func__ << "(" << _balance << ")" << std::endl;
		}
		
	private:
		double _balance;
	};

}