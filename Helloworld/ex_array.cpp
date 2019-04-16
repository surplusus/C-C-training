#include "stdafx.h"

int main()
{
	int nArr[3][4] = 
	{
		{ 11,22,33,44 },
		{ 22,33,44,55 },
		{33,44,55,66}
	};
	
	int countRow = sizeof(nArr) / sizeof(nArr[0]);
	int countColumn = sizeof(nArr[0]) / sizeof(int);
	
	for (int i = 0; i < countRow; i++)
	{
		for (int j = 0; j < countColumn; j++)
		{
			printf("%d ", nArr[i][j]);
		}
		printf("\n");
	}
	return 0;
}