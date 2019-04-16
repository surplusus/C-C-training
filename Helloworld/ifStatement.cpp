#include "stdafx.h"

//int main()
//{
//	int nInput = 0, nSelect = 0;
//	scanf("%d", &nInput);
//	if (nInput <=10) nSelect=10; else nSelect = 20;
//	printf("%d\n", nSelect);
//	return 0;
//}

//int main()
//{
//	int nInput = 0;
//	char score = 0;
//	scanf("%c", &nInput);
//
//	if (nInput >= 70)
//	{
//		if (nInput >= 80)
//		{
//			if (nInput >= 90)
//			{
//				score = 'A';
//				printf("성적은 %c\n", score);
//				return 0;
//			}
//			score = 'B';
//			printf("성적은 %c\n", score);
//			return 0;
//		}
//		score = 'C';
//		printf("성적은 %c\n", score);
//		return 0;
//	} else {
//		if (nInput >= 60)
//		{
//			score = 'D';
//			printf("성적은 %c\n", score);
//			return 0;
//		} 
//		if (nInput < 60)
//		{
//			score = 'E';
//			printf("성적은 %c\n", score);
//			return 0;
//		}
//	}
//		
//}

//int main()
//{
//	int fee = 1000;
//	int dic = 0;
//	int nAge = 0;
//	printf("나이 : ");
//	scanf("%d", &nAge);
//
//	if(nAge >= 14)
//	{
//		if (nAge >= 20)
//			dic = 0;
//		else
//			dic = 25;
//	} 
//	else 
//	{
//		if (nAge >= 4)
//			dic = 50;
//		else
//			dic = 100;
//	}
//	printf("요금 %d원 \n", fee-fee*dic / 100);
//}

//int main()
//{
//	int nInput = 0;
//	char nSelect = 0;
//	printf("성적 : ");
//	scanf("%d", &nInput);
//
//	if (nInput >= 90)
//		nSelect = 'A';
//	else if (nInput >= 80)
//		nSelect = 'B';
//	else if (nInput >= 70)
//		nSelect = 'C';
//	else if (nInput >= 60)
//		nSelect = 'D';
//	else
//	{
//		nSelect = 'F';
//	}
//	printf("%c\n", nSelect);
//	return 0;
//}

int main()
{
	int fee = 1000;
	int dic = 0;
	int nAge = 0;
	printf("나이 : ");
	scanf("%d", &nAge);

	if (nAge > 0 && nAge < 4)
	{
		dic = 100;
	}
	else if (nAge >= 4 && nAge < 14)
	{
		dic = 50;
	}
	else if (nAge >= 14 && nAge < 20)
	{
		dic = 25;
	}
	else
	{
		dic = 0;
	}
	printf("요금 %d원 \n", fee-fee*dic / 100);
}
