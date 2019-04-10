#include "stdafx.h"
#include <float.h>
#include <conio.h>

int main()
{
	int a;
	// int a로 초기화 하면 가비지 값이 랜덤하게 할당된다.
	int b = 0;
	int c = 0;

	printf("두 정수를 입력하세요 :");
	scanf("%d %d", &a, &b);

	c = a + b;
	printf("\n두 수의 합은 ");
	printf("%d", c);
	printf(" 입니다.\n");

	return 0;
}