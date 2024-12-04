
#pragma once

//
//	Templates.h
//
//  © 2024 Zoraja Consulting. All rights reserved but even though use it.

#include <windows.h>

namespace vtl {

#if defined(DEBUG) | defined(_DEBUG)

	void Log() 
	{
		OutputDebugStringW(L"\n");
	}

	template <typename T, typename... Ts>
	inline void Log(const T& head, const Ts&... tail)
	{
		OutputDebugStringW(head.c_str());
		if constexpr (sizeof...(tail) > 0) OutputDebugStringW(L" ");
		Log(tail...);
	}

	template <typename T, typename... Ts>
	inline void Log(int channel, int verbosity, const T& head, const Ts&... tail)
	{
		if (channel && verbosity) Log(head, tail...);
	}

#else
	#define Log(x,...);
#endif

}