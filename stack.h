#ifndef STACK_H
#define STACK_H
#include "array.h"
class Stack {
private:
	Array arr_;
	int tos_;
	
	static const int STACKSIZE;

public:
	explicit Stack(int size = 100);
	Stack(const Stack& rhs);
	//~Stack();

	//Stack& operator=(const Stack& rhs);
	
	void push(int data);
	int pop();
};	


#endif
