#include "MyIntPtr.h"

MyIntPtr::MyIntPtr(MyInt* ptr) : _ptr{ ptr }
{
}

MyIntPtr::~MyIntPtr()
{
	if (_ptr == nullptr)
		delete _ptr;
}

MyInt& MyIntPtr::operator*()
{
	return *_ptr;
}

MyInt* MyIntPtr::operator->()
{
	return _ptr;
}
