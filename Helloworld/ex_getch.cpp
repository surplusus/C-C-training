#include "stdafx.h"
#include <conio.h>

int main()
{
	char ch = 0;

	printf("�ƹ� Ű�� ������ �������� �Ѿ�ϴ�.\n");

	//_getch() �� CPU Buffer�� ��ġ�� �ʰ� Ű����� �Է��� Ű�� ����Ѵ�.
	ch = _getch();

	printf("�Է��� Ű�� \n");
	putchar(ch);
	printf("\n �Դϴ�. \n");

	return 0;
}