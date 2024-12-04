
#pragma once

// Something.h
//
//  © 2019 Zoraja Consulting. All rights reserved but even though use it.

#include <iostream>

namespace abc {

	struct Something {

		Something(int value=0) : 
			_value{value} 
		{
			std::cout << "Something(): " << _value << std::endl;
		}
		
		void m()
		{ 
			std::cout << "Something::m(): " << _value << std::endl;
		}

		~Something()
		{
			std::cout << "~Something(): " << _value << std::endl;
		}

	private:
		int _value;
	};

}