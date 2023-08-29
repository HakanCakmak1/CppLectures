#pragma once
class Random
{
public:
	Random(int low, int high);
	int operator()();
private:
	int mlow, mhigh;
};

