#pragma once
#include <iostream>
using std::ostream;
using std::istream;

class String
{
private:
	char * str;
	int len;
	static int num_str;
	static const int CINLIM = 80;
public:
	String();
	~String();
	String(const char * s);
	String(const String & st);
	int length() const { return len; }

	String & operator=(const String & st);
	String & operator=(const char * s);
	char & operator[](int i);
	const char & operator[](int i) const;

	friend ostream & operator<< (ostream & os, const String & st);
	friend istream & operator>> (istream & is, String & st);
	friend bool operator==(const String & st1, const String & st2);
	friend bool operator>(const String & st1, const String & st2);
	friend bool operator<(const String & st1, const String & st2);

	static int HowMany();
};
