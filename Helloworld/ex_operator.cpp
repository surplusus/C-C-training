#include "stdafx.h"

//int main()
//{
//	int nResult = 0;
//
//	// 1: 3 + 4
//	//2: 7(�ӽð��) - 5
//	//3: nResult = 2
//	nResult = 3 + 4 - 5;
//	printf("nResult : %d \n", nResult);
//
//
//	return 0;
//}

//int main()
//{
//	int a;
//	int b;
//	scanf("%d %d", &a, &b);
//	printf("%.2f", (a + b) / 2.0f);
//
//
//	return 0;
//}

//int main()
//{
//	int a;
//	scanf("%d", &a);
//	printf("%d", a % 3);
//	return 0;
//}

int main()
{
	int a;
	int sec, min, h;

	scanf("%d", &a);
	
	h = (a / 3600);
	
	min = (a - (h * 3600)) / 60;
	sec = (a - (h * 3600) - (min * 60));

	printf("%d�ʴ� %02d�ð� %02d�� %02d�� �Դϴ�. \n",a, h, min, sec);
	// ������
	// printf("%d�ʴ� %02d�ð� %02d�� %02d�� �Դϴ�. \n", a, a / 3600, a % 3600 / 60, a % 60);

	return 0;
}