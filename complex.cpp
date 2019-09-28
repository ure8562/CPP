#include "complex.h"

int Complex::numberOfComplex;
int Complex::getNumberOfComplex()
{
	return Complex::numberOfComplex;
}
std::ostream& operator<<(std::ostream& out,const Complex& rhs)
{
	out << "(" <<rhs.re<< ", " << rhs.im << "i)";
	
	return out;
}


const Complex operator+(const Complex& lhs, const Complex& rhs)
{
	Complex result(lhs.re + rhs.re, lhs.im + rhs.im);
	return result;
}

const Complex operator-(const Complex& lhs, const Complex& rhs)
{
	Complex result(lhs.re - rhs.re, lhs.im - rhs.im);
	return result;
}

const Complex operator*(const Complex& lhs, const Complex& rhs)
{
	Complex result(lhs.re * rhs.re, lhs.im * rhs.im);
	return result;
}

const Complex operator/(const Complex& lhs, const Complex& rhs)
{
	Complex result(lhs.re / rhs.re, lhs.im / rhs.im);
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
	++numberOfComplex;
}
Complex::Complex(const Complex &rhs)
{
 	this->re = rhs.re;
 	this->im = rhs.im;
 	++numberOfComplex;
}
Complex::~Complex()
{
	--numberOfComplex;
}

bool Complex::operator==(const Complex &rhs) const
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
double Complex::real() const
{	
	return this->re;
}

double Complex::imag() const
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

	

