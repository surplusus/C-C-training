#pragma once
#include <iostream>
using std::ostream;
using std::istream;

class string1
{
private:
	char * str;
	int len;
	static int num_strings;
	static const int CINLIM = 80;
public:
	string1();
	string1(const char * s);
	string1(const string1 & st);
	~string1();
	int length() const { return len; }

	string1 & operator=(const string1 & st);
	string1 & operator=(const char * s);
	char & operator[](int i);
	const char & operator[](int i) const;
	string1 operator+(const char * s);
	void stringlow();
	void stringup();
	int has(const char s);

	friend bool operator<(const string1 & st1, const string1 & st2);
	friend bool operator>(const string1 & st1, const string1 & st2);
	friend bool operator==(const string1 & st1, const string1 & st2);
	friend ostream & operator<< (ostream & os, const string1 & st);
	friend istream & operator>> (istream & is, string1 & st);
	friend string1 operator+(const char * s, const string1 & st);
	friend string1 operator+(const string1 & st1, const string1 & st2);

	static int HowMany();
};

