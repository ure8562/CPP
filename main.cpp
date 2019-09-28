#include <iostream>
#include "string.h"

int main()
{
	String s1;
	String s2("hello");	// String s2 = "hello\n";
	String s3('a',10);
	String s4("abc",3);
	String s5(s2);
	
	s1 = s2;
	std::cout <<"s1: " << s1.c_str() << std::endl;
	std::cout <<"s1 len : " << s1.length() << std::endl;
	std::cout <<"s2: " << s2.c_str() << std::endl;
	std::cout <<"s2 len : " << s2.length() << std::endl;
	std::cout <<"s3: " << s3.c_str() << std::endl;
	std::cout <<"s3 len : " << s3.length() << std::endl;
	std::cout <<"s4: " << s4.c_str() << std::endl;
	std::cout <<"s4 len : " << s4.length() << std::endl;
	std::cout <<"s5: " << s5.c_str() << std::endl;
	std::cout <<"s5 len : " << s5.length() << std::endl;
	
	if(s1 == s2)
		std::cout<< "s1 and s2 are equal" << std::endl;
	else
		std::cout<< "s1 and s2 are not equal" << std::endl;
	
	String s6;
	String s7(" world");
	s6 = s2 + s7;
	std::cout << "s6: " << s6 << std::endl;
	
	return 0;
}
