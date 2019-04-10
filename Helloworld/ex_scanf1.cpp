#include "stdafx.h"
#include <float.h>
#include <conio.h>

int main()
{
	int nAge = 0;
	char sName[16] = { 0 };

	//printf("나이를 입력하세요 : ");
	//scanf("%d", &nAge);
	//
	//printf("\n이름을 입력하세요 : ");
	//scanf("%s", &sName);
	//// gets_s(sName, sizeof(sName)); - 이건 안된다.
	//// 나이를 입력받고 친 Enter키도 함께 buffer에 남기 때문이다. 
	//// gets와 puts는 버퍼를 그대로 받아온다. 
	//
	//printf("당신의 이름은 \'");
	//printf("%s", sName);
	//printf("\'이고 나이는 %d살 입니다. \n", nAge);

	/*---------------_fgetchar() 함수사용-----------------------*/

	printf("나이를 입력하세요 : ");
	scanf("%d", &nAge);
	
	_fgetchar();  //버퍼를 초기화하는 함수

	printf("\n이름을 입력하세요 : ");
	gets_s(sName, sizeof(sName));

	printf("당신의 이름은 \'");
	printf("%s", sName);
	printf("\'이고 나이는 %d살 입니다. \n", nAge);


	//flush 함수를 공부해보기

	return 0;
}
