#ifndef STRING_H
#define STRING_H
#include <cstddef>
#include <iostream>

class String {
friend std::ostream& operator<<(std::ostream& out, const String& rhs);

private:
	int len_;
	char *str_; 

	void set_str(const char *str);

public:
	//String();
	String(const char *str = NULL);
	String(const String& rhs);
	~String();
	
	String& operator=(const String& rhs);
	bool operator==(const String& rhs) const;
	const String operator+(const String& rhs) ;
	
	const char* c_str() const;
	int length() const;
	
	
	int strlen_B(const char *c) const;
	void strcpy_B(char *str1, const char *str2);
	int strcmp_B(const char *str1, const char *str2) const;
	char* strcat_B(char *str1, const char *str2) const;
};


#endif
