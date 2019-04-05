#include "stdafx.h"

int main()
{
	// int getchar();
	// int putchar(int c);
	//NULL = 0;

	char ch = 0;
	ch = getchar();
	// putchar와 getchar는 1byte 단위 문자만 사용가능
	putchar('h');
	putchar(ch);

	return 0;
}