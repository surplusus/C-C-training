#include "stdafx.h"

int main(void)
{
	const int maxAge = 100;
	int remainAge = 0;
	int cutLife = 0;
	int cigaStartAge = 0;
	int cigaYear = 0;
	int howLongYear = 0;
	int howManyCiga = 0;
	int cutLifeMin = 0;
	//int a=1, b=2, c=3;

	printf("�� ����� �Ǳ� ���� : ");
	scanf("%d", &cigaStartAge);
	printf("�� �Ⱓ �Ǳ� ���� : ");
	scanf("%d", &howLongYear);
	printf("�Ϸ翡 �� ���Ǿ� �ǿ��°� : ");
	scanf("%d", &howManyCiga);

	cigaYear = 50 - cigaStartAge;
	cutLifeMin = cigaYear * 2;
	//((maxAge - cigaStartAge) < cutLife) ? (maxAge -= (cutLife - cigaStartAge)) : (maxAge -= cutLife);
	cutLife = cutLifeMin / 365 / 24 / 60;
	remainAge = maxAge - cutLife;

	printf("����� %d����� �� �� �ֽ��ϴ�.", remainAge);
	return 0;
}
