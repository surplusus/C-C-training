#include "stdafx.h"
#include <Windows.h>

int main()
{
	int i = 11;

	printf("카운트다운! \n");

	while (i--)
	{
		if (i == 0) 
			printf("카운트다운 끝! \n");
		else
			printf("%d! \n", i);
		Sleep(200);
		
	}

	
	return 0;
}