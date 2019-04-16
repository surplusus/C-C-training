#include "stdafx.h"

//int main()
//{
//	int aList[5][5] = { 0 };
//	int count = 0;
//
//	for (int i = 0; i < 5; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			count++;
//			aList[i][j] = count;
//		}
//	}
//	
//	for (int i = 0; i < 5; i++)
//	{
//
//		if (i % 2 == 1)
//		{
//			for (int j = 0; j < 5; j++)
//			{
//				printf("%d\t", aList[i][4-j]);
//			}
//		}
//		else
//		{
//
//			for (int j = 0; j < 5; j++)
//			{
//				printf("%d \t", aList[i][j]);
//			}
//		}
//
//		putchar('\n');
//	}
//
//	return 0;
//}

int main()
{
	
	int arrInput[5][5] = { 0 };
	int nPlus[4] = { +1,+5,-1,-5 };
	int nextNumberForDirection = 5;
	int nextValueIndex = 0;
	int nPlusCount = 0;
	int nValue = 0;
	int nIndex = -1;
	int arrNextNumber[10] = { 0 };
	int iMirror = -5;
	for (int i = 0; i < 5; i++)
	{
		iMirror += 5 - i;
		arrNextNumber[2*i] = iMirror;
		iMirror += 5 - i;
		arrNextNumber[(2 * i) +1] = iMirror;
	}
	//for (int j = 0; j < 10; j++)
	//{
	//	printf("%d  ", arrNextNumber[j]);
	//}

	printf("\n");

	while (nValue != 26)
		{
			nValue++;
			if (nValue == nextNumberForDirection+1)
			{
				nPlusCount++;
				nextNumberForDirection = arrNextNumber[nPlusCount+1];
			}
			nIndex +=  nPlus[nPlusCount % 4];
			arrInput[0][nIndex] = nValue;
		}
	

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%d\t", arrInput[i][j]);
		}
		putchar('\n');
	}

	return 0;
}