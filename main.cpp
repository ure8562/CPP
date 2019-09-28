#include <iostream>
#include "shape.h"
#include "rectangle.h"
#include "circle.h"
#include <typeinfo>

void printArea(const Shape *ps)
{
	if (typeid(*ps) == typeid(Rectangle))	//RTTI : runtime type identification
		std::cout<<"rectangle ";
	else if(typeid(*ps) == typeid(Circle))
		std::cout<<"circle ";
	
	std::cout << "area: " << ps->area() << std::endl;
}

int main()
{
	Shape *shapes[3];
	shapes[0] = new Rectangle(100, 100, 5, 10);
	shapes[1] = new Circle(100, 100, 10);
	shapes[2] = new Rectangle(0, 0, 10, 20);
	
	for(int i = 0; i < 3; ++i)
		printArea(shapes[i]);
	
	for(int i = 0; i < 3; ++i)
		delete shapes[i];
		
	return 0;
}
