#include <iostream>
#include "ration.h"

int main()
{
	Ration R1;
	Ration R2(1,2);
	Ration R3(1,0);
	
	R3 = R1;
	
	std::cout << "c1: (" << R1.number() << " num, " << R1.deno() << " den, " << R1.ration() << " value)" << std::endl;
	std::cout << "c2: (" << R2.number() << " num, " << R2.deno() << " den, " << R2.ration() << " value)" <<std::endl;
	std::cout << "c3: (" << R3.number() << " num, " << R3.deno() << " den, " << R3.ration() << " value)" <<std::endl;
	
	if(R1 == R3)	// c1.operator == (c3) or operator == (c1,c3)
		std::cout << "R1 and R3 are equal" << std::endl;
	else
		std::cout << "R1 and R3 are notequal" << std::endl;
	
	return 0;
}
