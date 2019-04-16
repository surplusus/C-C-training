#include "stdafx.h"

int main()
{
	char cOper = 0;
	int x = 0, y = 0, nRe = 0;
	scanf("%d%c%d", &x, &cOper, &y);

	switch (cOper)
	{
	case '+':
		nRe = x + y;
		break;
	case '-':
		nRe = x - y;
		break;
	case '*':
		nRe = x * y;
	case '/':
		nRe = x / y;
	default:
		break;
	}
	printf("Result : %d \n", nRe);
	return 0;
}