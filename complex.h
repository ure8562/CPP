#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>



class Complex {

friend const Complex operator+(const Complex& lhs, const Complex& rhs);
friend const Complex operator-(const Complex& lhs, const Complex& rhs);
friend const Complex operator*(const Complex& lhs, const Complex& rhs);
friend const Complex operator/(const Complex& lhs, const Complex& rhs);
// -, *, /

friend std::ostream& operator<<(std::ostream& out,const Complex& rhs);
//>>

private:
	static int numberOfComplex;
	double re;
	double im;

public:	
	static int getNumberOfComplex();

	//Complex();				// default constructor
	//Complex(double re);	// covertor constructor
	Complex(double re = 0.0, double im = 0.0);
	Complex(const Complex &rhs);	//copy constructor
	~Complex();
	
		
	bool operator==(const Complex &rhs) const;		//right-hand side
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
	
	
	double real() const;
	double imag() const;
	void real(double re);
	void imag(double im);

	//..
};


#endif
