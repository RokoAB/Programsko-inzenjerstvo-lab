
#pragma once

//
//	Debug Output.h
//
//  © 2024 Zoraja Consulting. All rights reserved but even though use it.

#include <iostream>
#include <windows.h>

namespace dbg {

	class DebugOutput {
	};

	std::ostream& operator<<(std::ostream& os, const std::wstring& text)
	{
		OutputDebugStringW(text.c_str());
		return os;
	}
}