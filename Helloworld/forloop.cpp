#include "stdafx.h"

//int main()
//{
//	int count = 0;
//	scanf("%d", &count);
//
//	if (count > 9) count = 9;
//	if (count < 0) count = 1;
//
//	int i = 0;
//	while (i != count)
//	{
//		printf("*");
//		i++;
//	}
//	printf("\n");
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	while(n >= 0 )
//	{
//		n += 6000;
//	}
//
//	printf("%d \n", n);
//	return 0;
//}

//int main()
//{
//	char ch = 0;
//	int n = 0;
//
//	while ((ch = getchar()) != '\n')
//	{
//		printf("%02d \t %c \n", n, ch);
//		++n;
//	}
//	return 0;
//}

//int main()
//{
//	int n1 = 5, n2 = 5;
//	while (n1--)
//	{
//		while (n2--)
//		{
//			printf("*\t");
//		}
//		n2 = 5;
//		printf("\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%dth\n", i);
//	}
//	return 0;
//}

//int main()
//{
//	int num = 0;
//	
//	scanf("%d", &num);
//
//	int result = 0;
//	for (int i = 1; i <= num; ++i)
//	{
//		result += i;
//		
//	}
//	printf("모두 더한 값은 : %d 입니다 \n", result);
//
//	result = 0;
//
//	while (num > 0)
//	{
//		result += num--;
//		
//	}
//	printf("모두 더한 값은 : %d 입니다 \n", result);
//
//
//	return 0;
//}

int main()
{
	int nTitle = 2;
	
	int column = 1;


	for (int j = 1; j <= 9; j++)
	{
		for (int i = 2; i <= 9; i++)
		{
			printf(" %d*%d=%d ", i, j, i*j);
		}
		printf("\n");
	}

	return 0;
}