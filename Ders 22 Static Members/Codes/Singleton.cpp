#include "Singleton.h"

Singleton Singleton::singleton{};

Singleton& Singleton::getInstance()
{
	return singleton;
}

int Singleton::getInt() const
{
	return mx;
}

void Singleton::setInt(int x)
{
	mx = x;
}
