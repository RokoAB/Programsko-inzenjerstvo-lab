//
//  Helpers.h
//
//  © 2024 Zoraja Consulting. All rights reserved but even though use it.

#pragma once

#include <Windows.h>

#include <iostream>
#include <memory>
#include <locale>
#include <codecvt>

//	Set the following directive in the project
//	#define _SILENCE_CXX17_CODECVT_HEADER_DEPRECATION_WARNING

using Convertor = std::codecvt_utf8<wchar_t>;

inline void SetUTF8(std::wostream& stream)
{
	auto convertor = std::make_unique<Convertor>();

	std::locale loc{ std::locale(), convertor.get() };

	convertor.release();

	stream.imbue(loc);

	SetConsoleOutputCP(CP_UTF8);
}