#include "Random.h"

#include <iostream>
#include <random>

int Random::operator()()
{
	return std::rand() % (mhigh - mlow + 1) + mlow;
}

Random::Random(int low, int high) : mlow{low} , mhigh{high}
{
}
