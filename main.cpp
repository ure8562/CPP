#include <iostream>
#include "complex.h"

int main()
{
	Complex c1;
	Complex c2(1.0);		// Complex c2 = 1.0;
	Complex c3(3.0, 4.0);
	const Complex c4(c3);			// Complex c4 = c3;
	
	
	//c1.real(c3.real());
	//c1.imag(c3.imag());
	c1 = c3;
	c2 += c3;
	
	Complex c5;
	
	c5 = c2 + c3;
	
	++c2;
	c3++;
	
	//std::cout << "c1: (" << c1.real() << ", " << c1.imag() << "i)" << std::endl;
	std::cout << "c1: " << c1 << std::endl;	//cout.operator<<(c1) or operator<<(cout, c1)
	std::cout << "c2: " << c2 << std::endl;
	std::cout << "c3: " << c3 << std::endl;
	std::cout << "c4: " << c4 << std::endl;
	std::cout << "c5: " << c5 << std::endl;
	
	//if(c1.real() == c3.real() && c1.imag() == c3.imag())
	if(c1 == c3)	// c1.operator == (c3) or operator == (c1,c3)
		std::cout << "c1 and c3 are equal" << std::endl;
	else
		std::cout << "c1 and c3 are notequal" << std::endl;
		
	std::cout << "#Complex object: "<< Complex::getNumberOfComplex() << std::endl;
		
		
	return 0;
}
