#include <iostream>
#include "array.h"

int main()
{	
	int num1[] = {1, 2, 3, 4, 5};
	double num2[] = {1.1, 2.2, 3.3, 4.4, 5.5};
	
	Array<int> arr1(num1, 5);
	Array<double> arr2(num2, 5);
	
	for(int i = 0; i < 5; ++i)
		std::cout << arr1[i] << ", ";
	std::cout << std::endl;
		
	for(int i = 0; i < 5; ++i)
		std::cout << arr2[i] << ", ";
	std::cout << std::endl;
	
	return 0;
}
