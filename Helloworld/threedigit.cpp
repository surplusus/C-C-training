#include "stdafx.h"

int main()
{
	int nInput;
	int n1, n2, n3;
	scanf("%d", &nInput);
	
	n1 = nInput / 100;
	n2 = (nInput - 100*n1) / 10;
	n3 = (nInput - 10*n2 - 100*n1) / 1;

	if (n1 % 2) printf("%d : Ȧ�� , ", n1); else printf("%d : ¦�� , ", n1);
	if (n2 % 2) printf("%d : Ȧ�� , ", n2); else printf("%d : ¦�� , ", n2);
	if (n3 % 2) printf("%d : Ȧ�� \n", n3); else printf("%d : ¦�� \n", n3);

	return 0;
}

