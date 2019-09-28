#include <iostream>
#include "array.h"
#include "safearray.h"

int main()
{
	int num1[] = {1,2,3,4,5};
	double num2[] = {1.1, 2.2, 3.3, 4.4, 5.5};
	SafeArray<int> arr3(num1,5);
	
	
	SafeArray<int> arr1(num1,5);
	SafeArray<double> arr2(num2,5);
	
	for(int i = 0; i < 5; ++i)
		std::cout << arr1[i] << ", ";
	std::cout << std::endl;
		
	for(int i = 0; i < 5; ++i)
		std::cout << arr2[i] << ", ";
	std::cout << std::endl;
	
	Array<int> *p = &arr3;
	(*p)[-1] = 1;
	
	return 0;
}
