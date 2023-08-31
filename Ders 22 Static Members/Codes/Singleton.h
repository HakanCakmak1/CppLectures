#pragma once
class Singleton
{
public:
	static Singleton& getInstance();
	int getInt() const;
	void setInt(int);

	Singleton(const Singleton&) = delete;
	Singleton& operator=(const Singleton&) = delete;
private:
	int mx = 0;

	Singleton() = default;
	~Singleton() = default;
	static Singleton singleton;
};

