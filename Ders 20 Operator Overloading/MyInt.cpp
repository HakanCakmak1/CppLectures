#include "MyInt.h"

#include <iostream>

std::ostream& operator<<(std::ostream& stream, const MyInt& myInt)
{
	return stream << myInt.mx;
}

std::istream& operator>>(std::istream& stream, MyInt myInt)
{
	return stream >> myInt.mx;
}

bool operator==(const MyInt& lhs, const MyInt& rhs)
{
	return lhs.mx == rhs.mx;
}

bool operator<(const MyInt& lhs, const MyInt& rhs)
{
	return lhs.mx < rhs.mx;
}

bool operator!=(const MyInt& lhs, const MyInt& rhs)
{
	return !(lhs == rhs);
}

bool operator>(const MyInt& lhs, const MyInt& rhs)
{
	return rhs < lhs;
}

bool operator<=(const MyInt& lhs, const MyInt& rhs)
{
	return !(lhs > rhs);
}

bool operator>=(const MyInt& lhs, const MyInt& rhs)
{
	return !(lhs < rhs);
}

MyInt& MyInt::operator+=(const MyInt& other)
{
	mx += other.mx;
	return *this;
}

MyInt operator+(const MyInt& lhs, const MyInt& rhs)
{
	return MyInt{ lhs } += rhs;
}

MyInt& MyInt::operator-=(const MyInt& other)
{
	mx -= other.mx;
	return *this;
}

MyInt operator-(const MyInt& lhs, const MyInt& rhs)
{
	return MyInt{ lhs } -= rhs;
}

MyInt& MyInt::operator*=(const MyInt& other)
{
	mx *= other.mx;
	return *this;
}

MyInt operator*(const MyInt& lhs, const MyInt& rhs)
{
	return MyInt{ lhs } *= rhs;
}

MyInt& MyInt::operator/=(const MyInt& other)
{
	if (other.mx == 0)
		throw std::runtime_error{"Divide by zero"};

	mx /= other.mx;
	return *this;
}

MyInt MyInt::operator+() const
{
	return *this;
}

MyInt MyInt::operator-() const
{
	return MyInt{-mx};
}

MyInt operator/(const MyInt& lhs, const MyInt& rhs)
{
	return MyInt{ lhs } /= rhs;
}

MyInt& MyInt::operator++()
{
	++mx;
	return *this;
}

MyInt MyInt::operator++(int)
{
	MyInt temp{ *this };
	++ *this;
	return temp;
}

MyInt& MyInt::operator--()
{
	--mx;
	return *this;
}

MyInt MyInt::operator--(int)
{
	MyInt temp{ *this };
	-- *this;
	return temp;
}