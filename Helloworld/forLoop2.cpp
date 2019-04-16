#include "stdafx.h"

//int main()
//{
//	int i = 0, j = 0;
//
//	for (i = 1; i < 5; i++)
//	{
//		for (j = 1; j < 5; j++)
//		{
//			printf("*\t");
//			
//		}
//		putchar('\n');
//	}
//
//	return 0;
//}

//int main()
//{
//	int i = 0, j = 0;
//
//	for (i = 1; i <= 5; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("*\t");
//
//		}
//		putchar('\n');
//	}
//
//	return 0;
//}

int main()
{
	int i = 0, j = 0;

	for (i = 1; i <= 5; i++)
	{
		for (j = 1; j <= 5; j++)
		{
			
			if (i + j - 5 > 0)
				printf("*\t"); else printf("\t");

		}
		putchar('\n');
	}

	return 0;
}