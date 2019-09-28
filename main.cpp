#include <iostream>
#include "array.h"
#include "stack.h"

int main()
{
	Stack s1;
	Stack s2(10); //Stack s2 = 10; X
	s1.push(100);
	s1.push(200);
	s1.push(300);
	
	Stack s3 = s1;
	std::cout<<"s2 1st pop(): "<< s3.pop() << std::endl;
	std::cout<<"s2 2nd pop(): "<< s3.pop() << std::endl;
	std::cout<<"s2 3rd pop(): "<< s3.pop() << std::endl;
	return 0;
}
