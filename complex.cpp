#include "complex.h"

std::ostream& operator<<(std::ostream& out,const Complex& rhs)
{
	out << "(" <<rhs.re_<< ", " << rhs.im_ << "i)";
	
	return out;
}


const Complex operator+(const Complex& lhs, const Complex& rhs)
{
	Complex result(lhs.re_ + rhs.re_, lhs.im_ + rhs.im_);
	return result;
}

const Complex operator-(const Complex& lhs, const Complex& rhs)
{
	Complex result(lhs.re_ - rhs.re_, lhs.im_ - rhs.im_);
	return result;
}

const Complex operator*(const Complex& lhs, const Complex& rhs)
{
	Complex result(lhs.re_ * rhs.re_, lhs.im_* rhs.im_);
	return result;
}

const Complex operator/(const Complex& lhs, const Complex& rhs)
{
	Complex result(lhs.re_ / rhs.re_, lhs.im_ / rhs.im_);
	return result;
}


Complex::Complex(double re, double im)
: re_(re), im_(im)
{

}
/*
Complex::Complex(const Complex &rhs)
{
 	this->re = rhs.re_;
 	this->im = rhs.im_;
}
Complex::~Complex()
{
	
}
*/
bool Complex::operator==(const Complex &rhs) const
{	
	return (re_ == rhs.re_ && im_ == rhs.im_);
	
}
/*	
Complex& Complex::operator=(const Complex &rhs)
{
	this->re = rhs.re_;
	this->im = rhs.im_;
	
	return *this;
}
*/	
Complex& Complex::operator+=(const Complex &rhs)
{
	re_ = re_ + rhs.re_;
	im_ = im_ + rhs.im_;
	
	return *this;
}
Complex& Complex::operator-=(const Complex &rhs)
{
	re_ = re_ - rhs.re_;
	im_ = im_ - rhs.im_;
	
	return *this;
}
Complex& Complex::operator*=(const Complex &rhs)
{
	re_ = re_ * rhs.re_;
	im_ = im_ * rhs.im_;
	
	return *this;
}
Complex& Complex::operator/=(const Complex &rhs)
{
	re_ = re_ / rhs.re_;
	im_ = im_ / rhs.im_;
	
	return *this;
}

Complex Complex::operator++()
{
	re_ = re_ +1;
	
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
	re_ = re_ -1;
}

Complex Complex::operator--(int)
{
	Complex tmp(*this);
	this->operator--();
	
	return tmp;
}
double Complex::real() const
{	
	return re_;
}

double Complex::imag() const
{
	return im_;
}

void Complex::real(double re)
{
	re_ = re;
}
	
void Complex::imag(double im)
{
	im_ = im;
}
