#include "stdafx.h"

int main()
{
	
	char ch = 0;
	// 배열 초기화
	char szName[32] = { 0 };

	printf("이름을 입력하세요 :  ");
	//gets 와 gets_s 의 차이 = 보안
	// gets_s(szName);
	// gets_s(참조변수, 메모리할당길이)
	gets_s(szName, sizeof(szName));
	printf("당신의 이름은 ");
	puts(szName + "입니다.");
	puts("입니다. \n");

	return 0;
}