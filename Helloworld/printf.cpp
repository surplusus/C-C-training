#include "stdafx.h"

int main()
{
	
	// int printf(const char* const_format, ....);
	// const = "" 의미 // const 안의 문자는 char 포인터를 가짐
	// ret를 초기화
	int ret = 0;

	char ch = 'a';
	int a = 1;
	float b = 2.0f;
	double c = 3;

	ret = printf("%d %d %d %d \n", sizeof(ch), sizeof(a), sizeof(b), sizeof(c));

	// printf는 길이를 int로 가짐 
	
	printf("%d \n", ret);

	// 변수 ret에 대한 주소 표시
	printf("%p \n", ret);

	// 문자열 표시
	printf("%s \n", "heoow");

	// %c(문자) %d(10진수) %f(실수) %s(문자열) %p(주소)
	// \a(소리) \b(백스페이스) \n(줄바꿈) \f(페이지바꿈) \t(Tab공백) \v(세로Tab공백) \\(\문자열) \"("문자열)
	return 0;
}