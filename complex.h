#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>



class Complex {

friend const Complex operator+(const Complex& lhs, const Complex& rhs);
friend const Complex operator-(const Complex& lhs, const Complex& rhs);
friend const Complex operator*(const Complex& lhs, const Complex& rhs);
friend const Complex operator/(const Complex& lhs, const Complex& rhs);


friend std::ostream& operator<<(std::ostream& out,const Complex& rhs);


private:
	double re_;
	double im_;

public:	

	Complex(double re = 0.0, double im = 0.0);
	//Complex(const Complex &rhs);		by Compiler
	//~Complex();						by Compiler
	
		
	bool operator==(const Complex &rhs) const;		
	//Complex& operator=(const Complex &rhs);	byComplier
	Complex& operator+=(const Complex &rhs);
	Complex& operator-=(const Complex &rhs);
	Complex& operator/=(const Complex &rhs);
	Complex& operator*=(const Complex &rhs);

	
	Complex operator++();			
	Complex operator++(int);		
	Complex operator--();		
	Complex operator--(int);		
	
	
	double real() const;
	double imag() const;
	void real(double re);
	void imag(double im);

	//..
};


#endif
