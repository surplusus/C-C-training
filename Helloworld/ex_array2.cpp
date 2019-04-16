#include "stdafx.h"

//int main()
//{
//	int score[10] = { 0 };
//	int nSum = 0;
//	//printf("%d", sizeof(float));
//
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d 번째 학생 성적 : ", i+1);
//		scanf("%d", &score[i]);
//		nSum += score[i];
//	}	
//		
//	printf("총점 : %d 평균 : %d \n", nSum, nSum / 10);
//
//	return 0;
//}

int main()
{
	int arrComp[9] = { 0 };
	int nComp = 0;

	printf("몇 단? : ");
	scanf("%d", &nComp);

	for (int i = 0; i < 9; i++)
	{
		arrComp[i] = nComp * (i + 1);
		printf("%d X %d = %d\n", nComp, i+1, arrComp[i]);
	}

	return 0;
}