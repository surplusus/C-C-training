#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
	int *S = (int*)malloc(sizeof(int)*n);
	memset(S, 0, sizeof(int)*n);
	for (int i = 0; i < n; i++)
	{
		S[i] = i+1;
	}
	int maxAnd=0, maxOr=0 , maxXor=0;
	for (int i = 0; i < n -1; i++)
	{
		for (int j = i+1; j < n; j++)
		{
			int tmpAnd = S[i] & S[j];
			int tmpOr = S[i] | S[j];
			int tmpXor = S[i] ^ S[j];

			if (tmpAnd > maxAnd && tmpAnd < k)	maxAnd = tmpAnd;
			if (tmpOr > maxOr && tmpOr < k)	maxOr = tmpOr;
			if (tmpXor > maxXor && tmpXor < k)	maxXor = tmpXor;
		}
	}
	printf("%d\n", maxAnd);
	printf("%d\n", maxOr);
	printf("%d\n", maxXor);
	free(S);
}

int main() {
	int n, k;

	scanf("%d %d", &n, &k);
	calculate_the_maximum(n, k);

	return 0;
}
