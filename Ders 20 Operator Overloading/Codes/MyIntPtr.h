#pragma once
class MyInt;

class MyIntPtr
{
public:
	MyIntPtr(MyInt* ptr);
	~MyIntPtr();
	MyInt& operator*();
	MyInt* operator->();

private:
	MyInt* _ptr;
};

