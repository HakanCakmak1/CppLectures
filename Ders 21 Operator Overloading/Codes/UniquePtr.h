#pragma once
template <class T>
class UniquePtr
{
public:
	UniquePtr();
	~UniquePtr();

	UniquePtr(T* ptr);

	UniquePtr(const UniquePtr&) = delete;
	UniquePtr& operator=(const UniquePtr&) = delete;

	UniquePtr(UniquePtr&& other);
	UniquePtr& operator=(UniquePtr&& other);

	T& operator*();
	T* operator->();

	T* get();
	T* release();

private:
	void Clean();
	T* _ptr;
};

template<class T>
inline UniquePtr<T>::UniquePtr() : _ptr{ nullptr }
{
}

template<class T>
inline UniquePtr<T>::~UniquePtr()
{
	Clean();
}

template<class T>
inline UniquePtr<T>::UniquePtr(T* ptr) : _ptr{ ptr }
{
}

template<class T>
inline UniquePtr<T>::UniquePtr(UniquePtr&& other) : _ptr{ other._ptr }
{
	other._ptr = nullptr;
}

template<class T>
inline UniquePtr<T>& UniquePtr<T>::operator=(UniquePtr&& other)
{
	if (this == &other)
		return *this;

	Clean();
	_ptr = other._ptr;
	other._ptr = nullptr;

	return *this;
}

template<class T>
inline T& UniquePtr<T>::operator*()
{
	return *_ptr;
}

template<class T>
inline T* UniquePtr<T>::operator->()
{
	return _ptr;
}

template<class T>
inline T* UniquePtr<T>::get()
{
	return _ptr;
}

template<class T>
inline T* UniquePtr<T>::release()
{
	T* temp = _ptr;
	_ptr = nullptr;
	return temp;
}

template<class T>
inline void UniquePtr<T>::Clean()
{
	if (_ptr)
	{
		delete _ptr;
		_ptr = nullptr;
	}
}
