#include "stdafx.h"

int main()
{
	// int getchar();
	// int putchar(int c);
	//NULL = 0;

	char ch = 0;
	ch = getchar();
	// putchar�� getchar�� 1byte ���� ���ڸ� ��밡��
	putchar('h');
	putchar(ch);

	return 0;
}