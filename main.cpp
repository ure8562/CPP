#include <iostream>
#include "string.h"

int main()
{
	String s1;
	String s2("hello, world");
	String s3(s2);
	
	s1 = s2;
	String s4(" korea");
	s1 = s2 + s4;
	
	if (s1==s2)
		std::cout<<"s1 and s2 are equal"<< std::endl;
	else
		std::cout<<"s1 and s2 are not equal"<< std::endl;
	
	std::cout << "s2: " << s2.c_str() << std::endl;
	std::cout << "len: " << s2.length() << std::endl;
	
	std::cout << "s1: " << s1.c_str() << std::endl;
	std::cout << "len: " << s1.length() << std::endl;
	
	std::cout << "s1: "<< s1<<std::endl;
	return 0;
}
