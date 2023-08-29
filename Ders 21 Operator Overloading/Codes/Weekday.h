#pragma once
#include <iosfwd>

enum class Weekday
{
	Monday,
	Tuesday,
	Wednesday,
	Thursday,
	Friday,
	Saturday,
	Sunday
};

std::ostream& operator<<(std::ostream& os, const Weekday& wd);

Weekday& operator++(Weekday& wd);
Weekday operator++(Weekday& wd, int);

Weekday& operator--(Weekday& wd);
Weekday operator--(Weekday& wd, int);