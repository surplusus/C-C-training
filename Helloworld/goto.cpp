#include "stdafx.h"

int main()
{
	
	int i = 0;

First :
	i++;
	printf("%d", i);
	if (i != 30) goto First;

	return 0;
}