#pragma once

#include <iosfwd>

class MyInt
{
public:
	MyInt() = default;
	MyInt(int x) : mx{ x } {}

	MyInt& operator+=(const MyInt& other);
	MyInt& operator-=(const MyInt& other);
	MyInt& operator*=(const MyInt& other);
	MyInt& operator/=(const MyInt& other);

	MyInt operator+() const;
	MyInt operator-() const;

	MyInt& operator++();
	MyInt operator++(int);

	MyInt& operator--();
	MyInt operator--(int);

	//inserter
	friend std::ostream& operator<<(std::ostream&, const MyInt&);
	//extractor
	friend std::istream& operator>>(std::istream&, MyInt);

	friend bool operator==(const MyInt& lhs, const MyInt& rhs);
	friend bool operator<(const MyInt& lhs, const MyInt& rhs);

private:
	int mx;
};

[[nodiscard]] bool operator!=(const MyInt& lhs, const MyInt& rhs);
[[nodiscard]] bool operator>(const MyInt& lhs, const MyInt& rhs);
[[nodiscard]] bool operator<=(const MyInt& lhs, const MyInt& rhs);
[[nodiscard]] bool operator>=(const MyInt& lhs, const MyInt& rhs);
[[nodiscard]] MyInt operator+(const MyInt& lhs, const MyInt& rhs);
[[nodiscard]] MyInt operator-(const MyInt& lhs, const MyInt& rhs);
[[nodiscard]] MyInt operator*(const MyInt& lhs, const MyInt& rhs);
[[nodiscard]] MyInt operator/(const MyInt& lhs, const MyInt& rhs);