//
//	Something.h
//
//  © 2024 Zoraja Consulting. All rights reserved but even though use it.

#pragma once

namespace abc {

	class Something {

	public:
		Something(int = -1);

		Something(const Something&);
		Something(Something&&) noexcept;

		Something& operator=(const Something&);
		Something& operator=(Something&&) noexcept;

		virtual ~Something();

	public:
		int* _ptr = nullptr;
	};

}