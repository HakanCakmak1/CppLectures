#pragma once
class Counter
{
public:
	Counter()
	{
		++msCreatedCount;
		++msAliveCount;
	}

	~Counter()
	{
		--msAliveCount;
	}

	Counter(const Counter&)
	{
		++msCreatedCount;
		++msAliveCount;
	}

	Counter(Counter&&)
	{
	}

	static int getAliveCount()
	{
		return msAliveCount;
	}

	static int getCreatedCount()
	{
		return msCreatedCount;
	}
private:
	inline static int msCreatedCount = 0;
	inline static int msAliveCount = 0;
};

