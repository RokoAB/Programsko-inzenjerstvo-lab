
#pragma once

// Smart Pointer.h
//
//  © 2024 Zoraja Consulting. All rights reserved but even though use it.

#include <iostream>

namespace mem {

	template <typename T>
	class SmartPtr {

	public:
		SmartPtr(T* = nullptr);
	
		SmartPtr& operator=(SmartPtr&);

		T& operator*();
		T const& operator*() const;

		T* operator->();
		T const* operator->() const;

		~SmartPtr();

	private:
		T* _pointee;
	};

	template <typename T>
	SmartPtr<T>::SmartPtr(T* pointee ) :
		_pointee{ pointee }
	{
		std::cout << "SmartPtr(): " << _pointee << std::endl;
	}

	// What the *$#!?
	template <typename T>
	SmartPtr<T>& SmartPtr<T>::operator=(SmartPtr& that)
	{
		std::cout << "SmartPtr::operator=()" << std::endl;
		if (this != &that) {
			delete _pointee;
			_pointee = that._pointee;
			that._pointee = nullptr;
		}
		return *this;
	}

	template <typename T>
	T const& SmartPtr<T>::operator*() const
	{
		std::cout << "SmartPtr::operator*()" << std::endl;
		return *_pointee;
	}

	template <typename T>
	T& SmartPtr<T>::operator*()
	{
		std::cout << "SmartPtr::operator*()" << std::endl;
		return *_pointee;
	}

	template <typename T>
	T* SmartPtr<T>::operator->()
	{
		std::cout << "SmartPtr::operator->()" << std::endl;
		return _pointee;
	}

	template <typename T>
	T const* SmartPtr<T>::operator->() const
	{
		std::cout << "SmartPtr::operator->()" << std::endl;
		return _pointee;
	}

	template <typename T>
	SmartPtr<T>::~SmartPtr()
	{
		std::cout << "~SmartPtr(): " << _pointee << std::endl;
		delete _pointee;
	}

}