#ifndef SHAPE_H
#define SHAPE_H

class Shape {	//
private:

	Shape(const Shape& rhs);
protected:
	int x_;
	int y_;

	Shape(int x, int y);
	
public:
	virtual ~Shape() {}

	void move(int x, int y = 0);
	virtual double area() const = 0; // pure virtual function 

};



#endif
