#pragma once
#include "MyInt.h"

template <size_t size>
class MyIntArray
{
public:
	MyInt& operator[](size_t idx);
	const MyInt& operator[](size_t idx) const;

private:
	MyInt _arr[size]{};
};

template<size_t size>
inline MyInt& MyIntArray<size>::operator[](size_t idx)
{
	return _arr[idx];
}

template<size_t size>
inline const MyInt& MyIntArray<size>::operator[](size_t idx) const
{
	return _arr[idx];
}
