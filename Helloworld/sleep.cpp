#include "stdafx.h"
#include <Windows.h>

int main()
{
	int i = 11;

	printf("ī��Ʈ�ٿ�! \n");

	while (i--)
	{
		if (i == 0) 
			printf("ī��Ʈ�ٿ� ��! \n");
		else
			printf("%d! \n", i);
		Sleep(200);
		
	}

	
	return 0;
}