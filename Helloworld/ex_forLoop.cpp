#include "stdafx.h"

//int main()
//{
//	int nInput = 0;
//	int nCenter = 0;
//	int nCountNum = 0;
//
//	printf("Ȧ���� �Է��ϼ��� : ");
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
//	printf("%d�� ����� : ", num);
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
//	printf("%d�� ����� ������ : ", num);
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
//		printf("ù ��° ���� �Է� : ");
//		scanf("%d", &nInput1);
//		printf("�� ��° ���� �Է� : ");
//		scanf("%d", &nInput2);
//		printf("%d + %d = %d �Դϴ�.\n", nInput1, nInput2, nInput1 + nInput2);
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
//		printf("�� / �� / ��\n");
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
//	printf("�л��� : %d\n", nStudent);
//	if (nStudent == 0) nStudent = 1;
//	printf("������� : %.1f / ������� : %.1f / ������� : %.1f\n",sumKor/nStudent,sumEng/nStudent,sumMath/nStudent);
//	printf("�����ְ� : %d / �����ְ� : %d / �����ְ� : %d\n", maxKor, maxEng, maxMath);
//	printf("�������� : %d / �������� : %d / �������� : %d\n", minKor, minEng, minMath);
//	return 0;
//}