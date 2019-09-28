#ifndef SAFEARRAY_H
#define SAFEARRAY_H
#include "array.h"

class SafeArray : public Array{
private:

public:
	explicit SafeArray(int size = Array::ARRAYSIZE);
	SafeArray(const SafeArray& rhs);
	SafeArray(const int *pArr, int size);
	virtual ~SafeArray();
	
	virtual int& operator[](int index);
	virtual const int& operator[](int index) const;
};



#endif
