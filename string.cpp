#include "string.h"
#include <cassert>
#include <cstring>
#include <iostream>

std::ostream& operator<<(std::ostream& out, const String& rhs)
{
	out << rhs.str_ ;
	
	return out;
}

String::String()
{
	this->str_ = new char[1];
	assert(this->str_);
	this->str_[0] = '\0';
	
	this->len_ = 0;
}
String::String(const char *s)
{
	this->str_ = new char[strlen(s) +1];
	assert(this->str_ );
	strcpy(this->str_, s);
	this->len_ = strlen(s);
}
String::String(const char *s, int n)
{
	this->str_ = new char[(strlen(s) * n) + 1];
	assert(this->str_ );
	strcpy(this->str_,s);
	for(int i = 1; i<= n-1; ++i)
		strcat(this->str_, s);
	
	this->len_ = strlen(s) * n;
}
String::String(char ch, int n)
{
	this->str_ = new char[n+1];
	assert(this->str_ );
	for(int i=0; i<n; ++i)
		this->str_[i] = ch;
	this->str_[n] = '\0';
	
	this->len_ = n;
}
String::String(const String &rhs)
{
	this->str_ = new char[rhs.len_ + 1];
	assert(this->str_ );
	strcpy(this->str_, rhs.str_);
	
	this->len_ = rhs.len_;
}
String::~String()
{
	delete [] this->str_;
}

String& String::operator=(const String &rhs)
{	
	if(this != &rhs){
		delete [] this->str_;
		this->str_ = new char[rhs.len_ + 1];
		assert(this->str_);
		strcpy(this->str_, rhs.str_);
		this->len_ = rhs.len_;
	}
	return *this;
}

bool String::operator==(const String &rhs) const
{
	return strcmp(this->str_, rhs.str_) == 0;
}
const String String::operator+(const String &rhs) const
{
	char *tmp = new char[this->len_ + rhs.len_ + 1];
	strcpy(tmp, this->str_);
	strcat(tmp, rhs.str_);
	String result(tmp);
	delete []tmp;
	
	return result;
}

const char *String::c_str() const
{
	return this->str_;
}
int String::length() const
{
	return this->len_;
}
