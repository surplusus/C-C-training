#include "stdafx.h"

int main()
{
	int nInput;
	int n1, n2, n3;
	scanf("%d", &nInput);
	
	n1 = nInput / 100;
	n2 = (nInput - 100*n1) / 10;
	n3 = (nInput - 10*n2 - 100*n1) / 1;

	if (n1 % 2) printf("%d : �汝� , ", n1); else printf("%d : 礎熱 , ", n1);
	if (n2 % 2) printf("%d : �汝� , ", n2); else printf("%d : 礎熱 , ", n2);
	if (n3 % 2) printf("%d : �汝� \n", n3); else printf("%d : 礎熱 \n", n3);

	return 0;
}

