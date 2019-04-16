#include "stdafx.h"
#include <string.h>


//int main()
//{
//	int aList[5] = { 0 };
//	int i = 0;
//
//	for (i = 0; i < 5; i++)
//		scanf("%d", &aList[i]);
//
//	for (i = 0; i < 5; i++)
//		printf("%d,\n", aList[i]);
//	
//	return 0;
//}

//int main()
//{
//	int aList[6] = { 10,20,30,40,50,60 };
//	int aListNew[5] = { 0 };
//	int aNewNew[5] = { 0 };
//	int i = 0;
//	for(i=0;i<5;i++)
//	aListNew[i] = aList[i];
//
//	//scanf("%s", aNewNew);
//	//printf("%s\n", aNewNew);
//	for (i = 0; i < 6; i++)
//		printf("%d\t", aListNew[i]);
//	putchar('\n');
//}

//int main()
//{
//	int aList[5] = { 10,20,50,40,30 };
//	int i = 0, nMax = aList[0], nMin = aList[0];
//
//	printf("%d",sizeof(aList));  //배열길이 = int(4) * 원소(5)
//	for (i = 0; i < 5; i++)
//	{
//		if (nMax < aList[i])
//			nMax = aList[i];
//		if (nMin > aList[i])
//			nMin = aList[i];
//	}
//	printf("%d \n %d \n", nMax, nMin);
//}

//int main()
//{
//	int aList[5] = { 30,40,10,50,20 };
//	int i = 0;
//
//	for (i = 0; i < 5; i++)
//		if (aList[i] >= aList[0]) aList[0] = aList[i];
//
//	for (i = 0; i < 5; i++)
//	
//		printf("%d\t", aList[i]);
//		putchar('\n');
//
//		printf("MAX : %d\n", aList[0]);
//		return 0;
//	
//}

//int main()
//{
//	int aList[5] = { 30,40,10,50,20 };
//	int i = 0, nTmp = 0;
//
//	for (i=0;i<5;i++)
//		if (aList[0] > aList[i])
//		{
//			nTmp = aList[0];
//			aList[0] = aList[i];
//			aList[i] = nTmp;
//		}
//
//	for (i = 0; i < 5; i++)
//		printf("%d\t", aList[i]);
//	putchar('\n');
//
//	printf("MIN : %d\n", aList[0]);
//	return 0;
//
//}