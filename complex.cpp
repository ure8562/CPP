#include "complex.h"

const Complex operator+(/*const*/ Complex& lhs, /*const*/ Complex& rhs)
{
	Complex result(lhs.real()+ rhs.real(), lhs.imag()+ rhs.imag());
	return result;
}

const Complex operator-(/*const*/ Complex& lhs, /*const*/ Complex& rhs)
{
	Complex result(lhs.real()- rhs.real(), lhs.imag()- rhs.imag());
	return result;
}

const Complex operator*(/*const*/ Complex& lhs, /*const*/ Complex& rhs)
{
	Complex result(lhs.real()* rhs.real(), lhs.imag()* rhs.imag());
	return result;
}

const Complex operator/(/*const*/ Complex& lhs, /*const*/ Complex& rhs)
{
	Complex result(lhs.real()/ rhs.real(), lhs.imag()/ rhs.imag());
	return result;
}

/*	
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
*/
Complex::Complex(double re, double im)
{
	this->re = re;
	this->im = im;
}
Complex::Complex(const Complex &rhs)
{
 	this->re = rhs.re;
 	this->im = rhs.im;
}
Complex::~Complex()
{

}

bool Complex::operator==(const Complex &rhs)
{	
	return (this->re == rhs.re && this->im == rhs.im);
	
}
	
Complex& Complex::operator=(const Complex &rhs)
{
	this->re = rhs.re;
	this->im = rhs.im;
	
	return *this;
}
	
Complex& Complex::operator+=(const Complex &rhs)
{
	this->re = this->re + rhs.re;
	this->im = this->im + rhs.im;
	
	return *this;
}
Complex& Complex::operator-=(const Complex &rhs)
{
	this->re = this->re - rhs.re;
	this->im = this->im - rhs.im;
	
	return *this;
}
Complex& Complex::operator*=(const Complex &rhs)
{
	this->re = this->re * rhs.re;
	this->im = this->im * rhs.im;
	
	return *this;
}
Complex& Complex::operator/=(const Complex &rhs)
{
	this->re = this->re / rhs.re;
	this->im = this->im / rhs.im;
	
	return *this;
}

Complex Complex::operator++()
{
	this->re = this->re +1;
	
	return *this;
}

Complex Complex::operator++(int)
{
	Complex tmp(*this);
	this->operator++();
	
	return tmp;
}
Complex Complex::operator--()
{
	this->re = this->re -1;
}

Complex Complex::operator--(int)
{
	Complex tmp(*this);
	this->operator--();
	
	return tmp;
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

	

