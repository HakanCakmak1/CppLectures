#include "Weekday.h"
#include <iostream>

std::ostream& operator<<(std::ostream& os, const Weekday& wd)
{
	static const char* const p[] = {
	"Monday",
	"Tuesday",
	"Wednesday",
	"Thursday",
	"Friday",
	"Saturday",
	"Sunday"
	};

	return os << p[static_cast<int>(wd)];
}
 
Weekday& operator++(Weekday& wd)
{ 
	using enum Weekday;
	return wd = (wd == Sunday) ? Monday : static_cast<Weekday>(static_cast<int>(wd) + 1);
}

Weekday operator++(Weekday& wd, int)
{
	Weekday temp = wd;
	++wd;
	return temp;
}

Weekday& operator--(Weekday& wd)
{
	using enum Weekday;
	return wd = (wd == Monday) ? Sunday : static_cast<Weekday>(static_cast<int>(wd) - 1);
}

Weekday operator--(Weekday& wd, int)
{
	Weekday temp = wd;
	--wd;
	return temp;
}
