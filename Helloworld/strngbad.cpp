#include <string>
#include <cstring>
#include "strngbad.h"
using namespace std;

int String::num_str = 0;	// 꼭 static은 초기화해야됨

String::String()
{
	len = 4;
	str = new char[1];
	str[0] = '\0';
	num_str++;
	cout << num_str << ": \"" << str << "\" 디폴트 객체 생성\n";
}

String::~String()
{
	--num_str;
	delete[] str;
}

String::String(const char * s)
{
	len = strlen(s);
	str = new char[len + 1];
	strcpy(str, s);
	num_str++;
	cout << num_str << ": \"" << str << "\" 객체 생성\n";
}

String::String(const String & st)
{
	num_str++;
	len = st.len;
	str = new char[len + 1];
	strcpy(str, st.str);
}

String & String::operator=(const String & st)
{
	if (this == &st)
		return *this;
	delete[] str;
	len = st.len;
	str = new char[len + 1];
	return *this;
}

String & String::operator=(const char * s)
{
	delete[] str;
	len = strlen(s);
	str = new char[len + 1];
	strcpy(str, s);
	return *this;
}

char & String::operator[](int i)
{
	return str[i];
}

const char & String::operator[](int i) const
{
	return str[i];
}

int String::HowMany()
{
	return num_str;
}

ostream & operator<<(ostream & os, const String & st)
{
	os << st.str;
	return os;
}

istream & operator>>(istream & is, String & st)
{
	char tmp[String::CINLIM];
	is.get(tmp, String::CINLIM);
	if (is)
		st = tmp;
	while (is && is.get() != '\n')
		continue;
	return is;
}

bool operator==(const String & st1, const String & st2)
{
	return (strcmp(st1.str, st2.str) == 0);
}

bool operator>(const String & st1, const String & st2)
{
	return st2 < st1;
}

bool operator<(const String & st1, const String & st2)
{
	return (strcmp(st1.str, st2.str) < 0);
}
