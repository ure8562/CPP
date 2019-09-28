#include <iostream>
#include "safearray.h"

int main()
{
	SafeArray arr1;
	SafeArray arr2(10);
	int nums[] = {1,2,3,4,5};
	SafeArray arr3(nums,5);
	SafeArray arr4(arr3);
	
	arr1 = arr3;
	
	if(arr1 == arr3)
		std::cout << "arr1 and arr2 are equal" << std::endl;
	else
		std::cout << "arr1 and arr2 are not equal" << std::endl;
		
	for (int i = 0; i <arr3.arr_size(); ++i)
		std::cout << arr3[i] << ", "; // arr1.operator[](i)

	//std::cout << "arr2 value: " << arr2.arr_value() << std::endl;
	std::cout << std::endl << "arr2 size: " << arr2.arr_size() << std::endl;
	
	Array *p = &arr3;
	(*p)[-1] = 1;
	
	return 0;
}
