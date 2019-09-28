#include "ration.h"
#include <iostream>

Ration::Ration()
{
	this->num = 0;
	this->den = 1;
	this->value = 0.0000;
}
Ration::Ration(int num)
{
	this->num = num;
	this->den = 1;
	this->value = num;
}
Ration::Ration(int num, int den)
{	
	if(Ration_If_Zero(den))
	{	
		this->num = num;
		this->den = den;
		this->value = (double)num / (double)den;
	}
	else
	{
		std::cout << "error den is zero " << std::endl;
		this->num = num;
		this->den = 1;
		this->value = (double)num / (double)den;
	}
}
Ration::~Ration()
{
	std::cout << "bye~" << std::endl;
}
int Ration::number()
{
	return this->num;
}
int Ration::deno()
{
	return this->den;
}
double Ration::ration()
{
	return this->value;
}
void Ration::number(int num)
{
	this->num = num;
}
void Ration::deno(int den)
{
	if(Ration_If_Zero(den))
		this->den = den;
	else
		std::cout << "error den is zero " << std::endl;

}
bool Ration::Ration_If_Zero(int den)
{
	return den!=0;
}

bool Ration::operator==(const Ration &rhs)
{
	return (this->num == rhs.num && this->den == rhs.den);
}

void Ration::operator=(const Ration &rhs)
{
	this->num = rhs.num;
	this->den = rhs.den;
	this->value = rhs.value;
}


