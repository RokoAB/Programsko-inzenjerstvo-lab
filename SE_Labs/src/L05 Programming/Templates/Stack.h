
#pragma once

//	Functions.h
//
//  © 2024 Zoraja Consulting. All rights reserved but even though use it.


#include <iostream>
#include <array>
#include <cassert>

namespace tpl {

	template <typename T, std::size_t N>
	class Stack {
	
	public:
		Stack();
		void Push(const T&);
		void Pop();
		const T& Top() const;
		bool Empty() const { return _count == 0; }
		size_t Size() const { return _count; }

	private:
		std::array<T, N> _elements;
		std::size_t _count;
	};

	template <typename T, std::size_t N>
	Stack<T,N>::Stack() :
		_count{0}
	{}

	template <typename T, std::size_t N>
	void Stack<T, N>::Push(T const& element)
	{
		assert(_count < N);
		_elements[_count++] = element;
	}

	template <typename T, std::size_t N>
	void Stack<T, N>::Pop()
	{
		assert(!Empty());
		--_count;
	}

	template <typename T, std::size_t N>
	T const& Stack<T, N>::Top() const
	{
		assert(!Empty());
		return _elements[_count - 1];
	}

	template <typename T, std::size_t N>
	inline void Show(Stack<T, N> stack, int count)
	{
		for (int i = 0; i < count; ++i) {
			std::wcout << stack.Top() << std::endl;
			stack.Pop();
		}
	}

}
