#include "Singleton.h"

Singleton& Singleton::getInstance()
{
	static Singleton singleton;
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
