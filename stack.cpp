#include <cstdio>
#include "stack.h"
#include <assert.h>

Stack::Stack(int size)
{	
	//this->pArr = (int *)malloc(sizeof(int) * size);
	this->pArr = new int[size];
	assert(this->pArr /* != NULL */);
	this->size = size;
	this->tos = 0;
}

Stack::~Stack()
{
	//free(this->pArr);
	delete [] this->pArr;
}
void Stack::push(int data)
{	
	assert(this->tos < this->size);	
	pArr[this->tos] = data;
	++this->tos;
}

int Stack::pop()
{	
	assert(this->tos /* != 0*/);
	--this->tos;
	return pArr[this->tos];
}
