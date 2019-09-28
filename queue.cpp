#include "queue.h"
#include <cstdio>
#include <assert.h>

Queue::Queue(int size)
{
	//this->pArr = (int *)malloc(sizeof(int) * size);	
	this->pArr = new int[size];
	assert(this->pArr /* != NULL*/);
	this->size = size;
	this->front = 0;
	this->rear = 0;
}

Queue::~Queue()
{
	//free(this->pArr);
	delete [] this->pArr;
}

void Queue::push(int data)
{	
	assert((this->rear) < (this->size));
	this->pArr[this->rear] = data;
	++this->rear;
}
int Queue::pop()
{	
	assert((this->rear) > (this->front));
	int result = this->pArr[this->front];
	++this->front;
	return result;
}


