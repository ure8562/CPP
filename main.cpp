#include <iostream>
#include "array.h"

int main()
{
	Array arr1;
	Array arr2(10);
	int nums[] = {1,2,3,4,5};
	Array arr3(nums,5);
	Array arr4(arr2);
	
	arr1 = arr2;
	
	if(arr1 == arr2)
		std::cout << "arr1 and arr2 are equal" << std::endl;
	else
		std::cout << "arr1 and arr2 are not equal" << std::endl;
		
	for (int i = 0; i <arr3.arr_size(); ++i)
		std::cout << arr3[i] << ", "; // arr1.operator[](i)

	//std::cout << "arr2 value: " << arr2.arr_value() << std::endl;
	std::cout << std::endl << "arr2 size: " << arr2.arr_size() << std::endl;
	return 0;
}
