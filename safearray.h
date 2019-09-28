#ifndef SAFEARRAY_H
#define SAFEARRAY_H
#include "array.h"

template <typename T>

class SafeArray : public Array<T>{
private:

public:
	explicit SafeArray(int size = Array<T>::ARRAYSIZE);
	SafeArray(const SafeArray<T>& rhs);
	SafeArray(const T *pArr, int size);
	virtual ~SafeArray();
	
	virtual T& operator[](int index);
	virtual const T& operator[](int index) const;
};

#include <cassert>
template <typename T>
SafeArray<T>::SafeArray(int size)
: Array<T>(size)
{

}

template <typename T>
SafeArray<T>::SafeArray(const T *pArr, int size)
: Array<T>(pArr, size)
{

}

template <typename T>
SafeArray<T>::SafeArray(const SafeArray<T>& rhs)
: Array<T>((Array<T>)rhs)
{

}

template <typename T>
SafeArray<T>::~SafeArray()
{

}

template <typename T>
T& SafeArray<T>::operator[](int index)
{
	assert(index >= 0 && index < this->Array<T>::size_);
	return this->Array<T>::operator[](index);
}

template <typename T>
const T& SafeArray<T>::operator[](int index) const
{
	assert(index >= 0 && index < this->Array<T>::size_);
	return this->Array<T>::operator[](index);
}

#endif
