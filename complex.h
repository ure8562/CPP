#ifndef COMPLEX_H
#define COMPLEX_H

class Complex {
private:
	double re;
	double im;

public:	
	Complex();				// default constructor
	Complex(double re);	// covertor constructor
	Complex(double re, double im);
	~Complex();
	
	double real();
	double imag();
	void real(double re);
	void imag(double im);
	
	bool operator==(const Complex &rhs);		//right-hand side
	void operator=(const Complex &rhs);
	//..
};


#endif
