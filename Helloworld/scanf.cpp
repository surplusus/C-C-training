#include "stdafx.h"

int main()
{
	int nAge = 0;
	printf("나이를 입력하세요. :");
	scanf("%d", &nAge); // & 표시는 변수 nAge의 주소를 가리킨다. 

	printf("나이는 %d 세 입니다. \n", nAge);

	return 0;
}