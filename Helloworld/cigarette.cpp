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

	printf("몇 살부터 피기 시작 : ");
	scanf("%d", &cigaStartAge);
	printf("몇 년간 피기 시작 : ");
	scanf("%d", &howLongYear);
	printf("하루에 몇 개피씩 피웠는가 : ");
	scanf("%d", &howManyCiga);

	cigaYear = 50 - cigaStartAge;
	cutLifeMin = cigaYear * 2;
	//((maxAge - cigaStartAge) < cutLife) ? (maxAge -= (cutLife - cigaStartAge)) : (maxAge -= cutLife);
	cutLife = cutLifeMin / 365 / 24 / 60;
	remainAge = maxAge - cutLife;

	printf("당신은 %d살까지 살 수 있습니다.", remainAge);
	return 0;
}
