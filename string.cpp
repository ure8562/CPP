#include "string.h"
#include <cstring>
#include <cassert>

std::ostream& operator<<(std::ostream& out, const String& rhs)
{
	out << rhs.str_<< "  "<< rhs.len_;
	return out;
}

char* String::strcat_B(char *str1, const char *str2) const
{
	int i =strlen_B(str1);
	int j =0;
	
	while( str2[j] != '\0')
		str1[i++] = str2[j++];
		
	return str1;
}

void String::set_str(const char *str)
{
	if (str ){
		str_ = new char[strlen_B(str)+1];
		assert(str_ );
		strcpy_B(str_,str);
		len_ = strlen_B(str);
	} else{
		str_ = new char[1];
		assert(str_ );
		str_[0] = '\0';
		len_ = 0;
	}

}



int String::strlen_B(const char *c) const
{
	int count = 0;
	for(int i=0; c[i] != '\0'; i++)
		count++;
	return count;
}

void String::strcpy_B(char *str1, const char *str2)
{
	for(int i=0; str2[i] != '\0' ;i++)
		str1[i] = str2[i];
	//str1[i] = '\0';
}

int String::strcmp_B(const char *str1, const char *str2) const
{
	int len1, len2;
	len1 = strlen_B(str1);
	len2 = strlen_B(str2);
	if(len1 == len2)
		return 0;
	else if(len1 > len2)
		return 1;
	else
		return -1;
}

/*
String::String()
{

}
*/
String::String(const char *str)
{
	set_str(str);
}

String::String(const String& rhs)
{
	set_str(rhs.str_);
}

String::~String()
{
	delete [] str_;
}

const char* String::c_str() const
{
	return str_;
}

int String::length() const
{
	return len_;
}

String& String::operator=(const String& rhs)
{
	if(this != &rhs){
		delete [] this->str_;
		set_str(rhs.str_);
	}
	return *this;
}
bool String::operator==(const String& rhs) const
{
	return strcmp_B(str_, rhs.str_) == 0;
}

const String String::operator+(const String& rhs) 
{
	/*
	int new_len = strlen_B(str_)+strlen_B(rhs.str_);
	char *tmp = new char[new_len+1];
	tmp[new_len] = '\0';
	
	int i=0,j=0;
	for(; str_[i] != '\0'; i++)
		tmp[i] = str_[i];
	for(; rhs.str_[j] != '\0'; j++){
		tmp[i] = rhs.str_[j];
		i++;	
	}
	
	String result(tmp);
	delete []tmp;	
	*/
	char *tmp = new char[strlen_B(str_)+strlen_B(rhs.str_) + 1];
	strcpy_B(tmp, str_);
	strcat_B(tmp, rhs.str_);
	String result(tmp);
	delete []tmp;
	
	return result;
}





