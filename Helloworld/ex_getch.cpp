#include "stdafx.h"
#include <conio.h>

int main()
{
	char ch = 0;

	printf("아무 키나 누르면 다음으로 넘어갑니다.\n");

	//_getch() 는 CPU Buffer를 거치지 않고 키보드로 입력한 키를 출력한다.
	ch = _getch();

	printf("입력한 키는 \n");
	putchar(ch);
	printf("\n 입니다. \n");

	return 0;
}