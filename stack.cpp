#include "stack.h"
#include <cassert>

const int Stack::STACKSIZE = 100;

Stack::Stack(int size)
:arr_(size), tos_(0)
{
	
}

Stack::Stack(const Stack& rhs)
:arr_(rhs.arr_.arr_size()), tos_(rhs.tos_)
{
	for(int i=0; i< rhs.tos_; ++i)
		arr_[i] = rhs.arr_[i];
}
/*
Stack::~Stack()
{

}
*/
void Stack::push(int data)
{
	assert(tos_ != arr_.arr_size());
	
	arr_[tos_] = data;
	tos_++;
}

int Stack::pop()
{
	assert(tos_ != 0);
	--tos_;
	return arr_[tos_];
	
}

