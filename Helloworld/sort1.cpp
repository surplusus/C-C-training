#include "stdafx.h"

// ��������(Bubble Sort) ���ؼ� ������ �������� ���Ƴִ´�
//int main()
//{
//
//	// int arrList[5] = {0 };
//	int arrList[5] = { 30,40,10,50,20 };
//	int i = 0, j = 0, nTmp = 0;
//
//	//for (int k = 0; k < 5; k++)
//	//{
//	//	scanf("%d", &arrList[k]);
//
//	//}
//
//
//	for (i = 0; i <5; i++)
//	{
//		for (j = 0; j < i; j++)
//		{
//			if (arrList[i] < arrList[j])
//			{
//				nTmp = arrList[j];
//				arrList[j] = arrList[i];
//				arrList[i] = nTmp;
//			}
//		}
//	}
//
//	for (int p = 0; p < 5; p++)
//	{
//		printf("%d\t", arrList[p]);
//	}
//	putchar('\n');
//	return 0;
//}

// ��������Bubble Sort (���ؼ� ū���� �ڷ� �̷��)
//int main()
//{
//	
//	// int arrList[5] = {0 };
//	int arrList[5] = { 30,40,10,50,20 };
//	int i = 0, j = 0, nTmp = 0;
//
//	//for (int k = 0; k < 5; k++)
//	//{
//	//	scanf("%d", &arrList[k]);
//
//	//}
//	
//
//	for ( i = 4; i >0; i--)
//	{
//		for ( j = 0; j < i; j++)
//		{
//			if (arrList[j] > arrList[j+1])
//			{
//				nTmp = arrList[j];
//				arrList[j] = arrList[j+1];
//				arrList[j+1] = nTmp;
//			}
//		}
//	}
//
//	for (int p = 0; p < 5; p++)
//	{
//		printf("%d\t", arrList[p]);
//	}
//	putchar('\n');
//	return 0;
//}

// ��������(Selection sort) ���� ���� �迭�ε����� �����ѵ� �ڿ� �ε����� �ٲ�������� ������ �ٲ۴�.
//int main()
//{
//	int arrList[5] = { 30, 40, 10, 50, 20 };
//	int i = 0, j = 0, nMinIndex = 0, nTmp = 0;
//
//	//for ( i = 0; i <4; i++)
//	//{
//	//	nMinIndex = i;
//	//	for ( j = i+1; j < 5; j++)
//	//	{
//	//		if (arrList[nMinIndex] > arrList[j]) nMinIndex = j;
//	//	}
//	//	if (nMinIndex !=i)
//	//	{
//	//		nTmp = arrList[nMinIndex];
//	//		arrList[nMinIndex] = arrList[i];
//	//		arrList[i] = nTmp;
//	//	}
//	//}
//
//	for ( i = 0; i < 4; i++)
//	{
//		for ( j = i+1; j < 5; j++)
//		{
//			nMinIndex = i;
//			if (arrList[j]<arrList[i])
//			{
//				nMinIndex = j;
//			}
//			if (nMinIndex != i)
//			{
//				nTmp = arrList[i];
//				arrList[i] = arrList[j];
//				arrList[j] = nTmp;
//			}
//		}
//
//	}
//
//	for ( i = 0; i < 5; i++)
//	{
//		printf("%d\t", arrList[i]);
//	}
//	putchar('\n');
//
//	return 0;
//}

