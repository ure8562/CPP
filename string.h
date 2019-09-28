#ifndef STRING_H
#define STRING_H
#include <iostream>

class String{
friend std::ostream& operator<<(std::ostream& out, const String &rhs);

private:
	char *str_;
	int len_;
public:
	String();
	String(const char *s);
	String(char ch, int n);
	String(const char *s, int n);
	String(const String& rhs);
	~String();
	
	String& operator=(const String &rhs);
	bool operator==(const String &rhs) const;
	
	const String operator+(const String &rhs) const;
	
	const char *c_str() const;
	int length() const;
};

#endif
