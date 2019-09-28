#include "rectangle.h"
Rectangle::Rectangle(int x, int y, int width, int height_)
: Shape(x,y), width_(width), height_(height_)
{

}


double Rectangle::area() const
{
	return width_*height_;
}
