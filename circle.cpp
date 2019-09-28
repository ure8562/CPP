#include "circle.h"

Circle::Circle(int x, int y, int radius)
:Shape(x,y), radius_(radius)
{

}

double Circle::area() const
{
	return PI * radius_ * radius_;
}
