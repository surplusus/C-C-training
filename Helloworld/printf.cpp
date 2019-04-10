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

	printf("%c \n", 'A');
	printf("%c \n", 'A' + 1);
	printf("%c \n", 65);

	// %u(unsigned decimal)
	printf("%d\n", -10);
	printf("%u\n", -10);
	printf("%d\n", -10);
	printf("%u\n", -10);

	// %+d(양수라면 +부호를 붙인다)
	printf("%+d %+d \n", 1234, -5678);

	// 8칸 공간을 만들고 오른쪽 정렬
	printf("%8d \n", 11234);
	// 8칸 공간을 만들고 왼쪽 정렬
	printf("%-8d \n", 11234);
	// 8칸 공간을 만들고 오른쪽 정렬 후 빈공간은 0으로 채움
	printf("%08d \n", 11234);

	// 소수점 3자리까지 표현 (cf 자리가 넘어간다면 반올림)
	printf("%.3f \n", 123.456);


	return 0;
}