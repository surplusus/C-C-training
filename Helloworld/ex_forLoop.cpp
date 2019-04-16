#include "stdafx.h"

//int main()
//{
//	int nInput = 0;
//	int nCenter = 0;
//	int nCountNum = 0;
//
//	printf("홀수를 입력하세요 : ");
//	scanf("%d", &nInput);
//	nCenter = (nInput) / 2;
//
//		for (int j = nCenter; j >= -nCenter; j=j-1)
//		{
//			if (j > 0)
//				nCountNum =  1 + (2*j);
//			else
//				nCountNum =  1 -(2*j);
//
//			int i = 0;
//			for ((j>=0)? (i = nCenter-j) : (i = nCenter + j); i > 0; i--)
//			{
//				printf("\t", i);
//			}
//			for (int k =1 ; k <= nCountNum; ++k)
//			{
//
//				printf("*\t");
//			}
//			printf("\n");
//		}
//		printf("\n");
//	
//
//	
//
//	return 0;
//}


//int main()
//{
//	int num = 0;
//	int count = 1;
//	int nMulti = 0;
//	scanf("%d", &num);
//	
//	printf("%d의 배수는 : ", num);
//	while (1)
//	{
//		nMulti = num * count;
//
//		if (100 <= nMulti) 
//			break; 
//		else
//		{
//			
//			printf(" %d ", nMulti);
//			count++;
//		}
//	}
//	printf("\n");
//	
//	printf("%d의 배수의 개수는 : ", num);
//	printf("%d\n", count-1);
//	return 0;
//}

//int main() 
//{
//	int num = 0;
//	int factorial = 1;
//	
//	scanf("%d", &num);
//
//	for (int i = 1; i <= num; i++)
//	{
//		printf("%d", i);
//		factorial *= i;
//	}
//
//	printf("\n%d\n", factorial);
//	return 0;
//}

//int main()
//{
//	int nInput1 = 0;
//	int nInput2 = 0;
//	int count = 1;
//	while (1)
//	{
//		printf("첫 번째 수를 입력 : ");
//		scanf("%d", &nInput1);
//		printf("두 번째 수를 입력 : ");
//		scanf("%d", &nInput2);
//		printf("%d + %d = %d 입니다.\n", nInput1, nInput2, nInput1 + nInput2);
//	}
//}

//int main()
//{
//	int nStudent = 0;
//	int scoreKor = 0;
//	int scoreEng = 0;
//	int scoreMath = 0;
//	int maxKor = 0;
//	int maxEng = 0;
//	int maxMath = 0;
//	int minKor = 999;
//	int minEng = 999;
//	int minMath = 999;
//	float sumKor = 0;
//	float sumEng = 0;
//	float sumMath = 0;
//	
//	while (1)
//	{
//		printf("국 / 영 / 수\n");
//		scanf("%d %d %d", &scoreKor, &scoreEng, &scoreMath);
//		if (scoreKor + scoreEng + scoreMath == 0)
//		{
//			minKor = 0;
//			minEng = 0;
//			minMath = 0;
//			break;
//		}
//			
//		nStudent++;
//
//		sumKor += scoreKor;
//		sumEng += scoreEng;
//		sumMath += scoreMath;
//
//		if (scoreKor >= maxKor) maxKor = scoreKor;
//		if (scoreEng >= maxEng) maxEng = scoreEng;
//		if (scoreMath>= maxMath) maxMath = scoreMath;
//		if (scoreKor <= minKor) minKor = scoreKor;
//		if (scoreEng <= minEng) minEng = scoreEng;
//		if (scoreMath <= minMath) minMath = scoreMath;
//	}
//	printf("학생수 : %d\n", nStudent);
//	if (nStudent == 0) nStudent = 1;
//	printf("국어평균 : %.1f / 영어평균 : %.1f / 수학평균 : %.1f\n",sumKor/nStudent,sumEng/nStudent,sumMath/nStudent);
//	printf("국어최고 : %d / 영어최고 : %d / 수학최고 : %d\n", maxKor, maxEng, maxMath);
//	printf("국어최저 : %d / 영어최저 : %d / 수학최저 : %d\n", minKor, minEng, minMath);
//	return 0;
//}