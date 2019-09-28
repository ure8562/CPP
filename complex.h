#ifndef COMPLEX_H
#define	COMPLEX_H
#include <iostream>


class Complex{
friend std::ostream& operator<<(std::ostream& out, const Complex& rhs);

private:
	double re_;
	double im_;	

public:
	//Complex();
	//Complex(double re);
	Complex(double re =0.0, double im = 0.0);	
	Complex(const Complex& rhs);
	~Complex();
	
	Complex& operator=(const Complex& rhs);
	
	bool operator==(const Complex& rhs) const;
	
	const Complex operator+(const Complex& rhs) const;
	
	double real() const;	
	double imag() const;	
	
	void real(double re);
	void imag(double im);
	 
};

#endif
