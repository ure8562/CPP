#include "complex.h"
	
	Complex::Complex()
	{
		this->re = 0.0;
		this->im = 0.0;
	}
	
	Complex::Complex(double re)
	{
		this->re = re;
		this->im = 0.0;
	}
	
	Complex::Complex(double re, double im)
	{
		this->re = re;
		this->im = im;
	}
	
	Complex::~Complex()
	{
	
	}
	
	double Complex::real()
	{	
		return this->re;
	}
	
	double Complex::imag()
	{
		return this->im;
	}
	
	void Complex::real(double re)
	{
		this->re = re;
	}
	
	void Complex::imag(double im)
	{
		this->im = im;
	}
	
	bool Complex::operator==(const Complex &rhs)
	{	
		return (this->re == rhs.re && this->im == rhs.im);
	
	}
	
	void Complex::operator=(const Complex &rhs)
	{
		this->re = rhs.re;
		this->im = rhs.im;
	}
	
