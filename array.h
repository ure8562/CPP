#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>

#define TRUE 1
#define FALSE 0

class Array {
private:
	static const int ARRAYSIZE;

	int size_;
	int* value_;

	void set_array(const int value[], const int size);
public:
	//Array();
	explicit Array(int size = ARRAYSIZE);
	Array(const int value[], int size);
	Array(const Array& rhs);
	~Array();
	
	Array& operator=(const Array& rhs);
	bool operator==(const Array& rhs) const;
	int& operator[](int i);
	const int& operator[](int i) const;
	
	//char arr_value() const;
	int arr_size() const;

};




#endif
