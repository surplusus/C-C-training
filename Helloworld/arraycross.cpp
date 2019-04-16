#include "stdafx.h"

int main()
{
	int aList[5][5] = { 0 };
	int count = 0;

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			count++;
			aList[i][j] = count;
		}
	}
	
	for (int i = 0; i < 5; i++)
	{

		if (i % 2 == 1)
		{
			for (int j = 0; j < 5; j++)
			{
				printf("%d\t", aList[i][4-j]);
			}
		}
		else
		{

			for (int j = 0; j < 5; j++)
			{
				printf("%d \t", aList[i][j]);
			}
		}

		putchar('\n');
	}

	return 0;
}