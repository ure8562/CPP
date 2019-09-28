#ifndef COMPLEX_H
#define COMPLEX_H
class Complex;

const Complex operator+(/*const*/ Complex& lhs, /*const*/ Complex& rhs);
const Complex operator-(/*const*/ Complex& lhs, /*const*/ Complex& rhs);
const Complex operator*(/*const*/ Complex& lhs, /*const*/ Complex& rhs);
const Complex operator/(/*const*/ Complex& lhs, /*const*/ Complex& rhs);
// -, *, /

class Complex {
private:
	double re;
	double im;

public:	
	//Complex();				// default constructor
	//Complex(double re);	// covertor constructor
	Complex(double re = 0.0, double im = 0.0);
	Complex(const Complex &rhs);	//copy constructor
	~Complex();
	
		
	bool operator==(const Complex &rhs);		//right-hand side
	Complex& operator=(const Complex &rhs);
	Complex& operator+=(const Complex &rhs);
	Complex& operator-=(const Complex &rhs);
	Complex& operator/=(const Complex &rhs);
	Complex& operator*=(const Complex &rhs);
	// -= += /= &= != ^=
	
	Complex operator++();			//prefix
	Complex operator++(int);		//postfix
	Complex operator--();			//prefix
	Complex operator--(int);		//postfix
	
	
	double real();
	double imag();
	void real(double re);
	void imag(double im);

	//..
};


#endif
