#include <iostream>
#include "string1.h"
#include <cstring>
using std::cin;
using std::cout;
#define _CRT_SECURE_NO_WARNINGS
int string1::num_strings = 0;

string1::string1()
{
	len = 4;
	str = new char[1];
	str[0] = '\0';
	num_strings++;
}

string1::string1(const char * s)
{
	len = std::strlen(s);
	str = new char[len + 1];
	std:strcpy(str, s);
	num_strings++;
}


string1::string1(const string1 & st)
{
	num_strings++;
	len = st.len;	
	str = new char[len + 1];
	std:strcpy(str, st.str);
}

string1::~string1()
{
	--num_strings;
	delete[] str;
}

string1 & string1::operator=(const string1 & st)
{
	if (this == &st)
		return *this;
	delete[]str;
	len = st.len;	
	str = new char[len + 1];
std:strcpy(str, st.str);
	return *this;
}

string1 & string1::operator=(const char * s)
{
	delete[] str;
	len = std::strlen(s);
	str = new char[len + 1];
	std::strcpy(str, s);
	return *this;
}

char & string1::operator[](int i)
{
	return str[i];
}

const char & string1::operator[](int i) const
{
	return str[i];
}

string1 string1::operator+(const char * s)
{
	return (std::strcat(str,s));
}

void string1::stringlow()
{
	for (int i = 0; i < len; i++)
		str[i] = tolower(str[i]);
}

void string1::stringup()
{
	for (int i = 0; i < len; i++)
		str[i] = toupper(str[i]);
}

int string1::has(const char s)
{
	int cnt = 0;
	for (int i = 0; i < len; i++)
		if (str[i] == s)
			cnt += 1;

	return cnt;
}

string1 operator+(const char * s, const string1 & st)
{
	int a = std::strlen(s);
	int b = std::strlen(st.str);
	char * tmp = new char[a+b+1]();
	tmp = std::strcat(tmp, s);
	tmp = std::strcat(tmp, st.str);
	string1 stTmp(tmp);
	return stTmp;
}

string1 operator+(const string1 & st1, const string1 & st2)
{
	char * tmp = new char[strlen(st1.str) + strlen(st2.str) + 1]();
	tmp = strcat(tmp, st1.str);
	tmp = strcat(tmp, st2.str);
	string1 stTmp(tmp);
	return stTmp;
}

int string1::HowMany()
{
	return num_strings;
}

bool operator<(const string1 & st1, const string1 & st2)
{
	return (std::strcmp(st1.str, st2.str) < 0);
}

bool operator>(const string1 & st1, const string1 & st2)
{
	return st2 < st1;
}

bool operator==(const string1 & st1, const string1 & st2)
{
	return (std::strcmp(st1.str, st2.str) == 0);
}

ostream & operator<<(ostream & os, const string1 & st)
{
	os << st.str;
	return os;
}

istream & operator>>(istream & is, string1 & st)
{
	char tmp[string1::CINLIM];
	is.get(tmp, string1::CINLIM);
	if (is)
		st = tmp;
	while (is && is.get() != '\n')
		continue;
	return is;
}
