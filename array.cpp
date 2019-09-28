#include "array.h"
#include <cassert>

const int Array::ARRAYSIZE = 100;

void Array::set_array(const int value[], const int size)
{
	value_ = new int[size];
	assert(value_ );
	size_ = size;
	for(int i=0; i<size; i++){
		value_[i] = value[i];
	}
}
/*
Array::Array()
{
	value_ = new int[1];
	assert(value_);
	size_ = 1;
	value_[0] = 0;
}
*/
Array::Array(int size)
: value_(new int[size]), size_(size)
{
	assert(value_);
	for(int i=0; i<size; i++)
		value_[i] = 0;
}

Array::Array(const int value[], int size)
{
	set_array(value, size);
}

Array::Array(const Array& rhs)
{
	set_array(rhs.value_, rhs.size_);
}

Array::~Array()
{
  delete [] value_;
}
/*
void Array::arr_value() const
{
	return value_;		
}
*/
int Array::arr_size() const
{
	return size_;
}

Array& Array::operator=(const Array& rhs)
{
	if(this != &rhs){
		delete []value_;	
		set_array(rhs.value_, rhs.size_);
	}
	return *this;
}

bool Array::operator==(const Array& rhs) const
{
	if (size_!=rhs.size_)
		return FALSE;	
	for(int i=0; i<size_; i++)
		if(value_[i] != rhs.value_[i])
			return FALSE;
	return TRUE;
}

int& Array::operator[](int i)
{
	return value_[i];
}


const int& Array::operator[](int i) const
{
	return value_[i];
}


