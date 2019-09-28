#ifndef ARRAY_H
#define ARRAY_H


#define TRUE 1
#define FALSE 0
template <typename T>
class Array {
protected:
	static const int ARRAYSIZE;

	int size_;
	T* value_;

	void set_array(const T value[], const int size);
public:
	explicit Array(int size = Array<T>::ARRAYSIZE);
	Array(const T value[], int size);
	Array(const Array<T>& rhs);
	virtual ~Array();
	
	Array<T>& operator=(const Array<T>& rhs);
	bool operator==(const Array<T>& rhs) const;
	virtual T& operator[](int i);
	virtual const T& operator[](int i) const;
	
	int arr_size() const;

};

#include <cassert>

template <typename T>
const int Array<T>::ARRAYSIZE = 100;

template <typename T>
void Array<T>::set_array(const T *value, const int size)
{
	value_ = new T[size];
	assert(value_ );
	size_ = size;
	for(int i=0; i<size; i++){
		value_[i] = value[i];
	}
}

template <typename T>
Array<T>::Array(int size)
: value_(new T[size]), size_(size)
{
	assert(value_);
	for(int i=0; i<size; i++)
		value_[i] = 0;
}

template <typename T>
Array<T>::Array(const T value[], int size)
{
	set_array(value, size);
}

template <typename T>
Array<T>::Array(const Array<T>& rhs)
{
	set_array(rhs.value_, rhs.size_);
}

template <typename T>
Array<T>::~Array()
{
  delete [] value_;
}

template <typename T>
int Array<T>::arr_size() const
{
	return size_;
}

template <typename T>
Array<T>& Array<T>::operator=(const Array<T>& rhs)
{
	if(this != &rhs){
		delete []value_;	
		set_array(rhs.value_, rhs.size_);
	}
	return *this;
}

template <typename T>
bool Array<T>::operator==(const Array<T>& rhs) const
{
	if (size_!=rhs.size_)
		return FALSE;	
	for(int i=0; i<size_; i++)
		if(value_[i] != rhs.value_[i])
			return FALSE;
	return TRUE;
}

template <typename T>
T& Array<T>::operator[](int i)
{
	return value_[i];
}

template <typename T>
const T& Array<T>::operator[](int i) const
{
	return value_[i];
}




#endif
