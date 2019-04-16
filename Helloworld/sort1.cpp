#include "stdafx.h"

// 버블정렬(Bubble Sort) 비교해서 작으면 왼쪽으로 몰아넣는다
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

// 버블정렬Bubble Sort (비교해서 큰수를 뒤로 미룬다)
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

// 선택정렬(Selection sort) 작은 수의 배열인덱스를 저장한뒤 뒤에 인덱스가 바뀌어있으면 실제로 바꾼다.
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

