#include "stdafx.h"
#include <float.h>
#include <conio.h>

int main()
{
	int a;
	// int a�� �ʱ�ȭ �ϸ� ������ ���� �����ϰ� �Ҵ�ȴ�.
	int b = 0;
	int c = 0;

	printf("�� ������ �Է��ϼ��� :");
	scanf("%d %d", &a, &b);

	c = a + b;
	printf("\n�� ���� ���� ");
	printf("%d", c);
	printf(" �Դϴ�.\n");

	return 0;
}