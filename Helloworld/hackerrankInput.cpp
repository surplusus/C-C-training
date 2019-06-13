#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	char s[1001];
	scanf("%s", s);
	int ncom = 0;
	int len = strlen(s);
	for (int i = 0; i < 10; i++)
	{
		int result = 0;
		for (int j = 0; j < len; ++j)
		{
			int tmp = s[j] - '0';
			if (tmp == i)
				result++;
		}
		printf("%d ", result);
	}

	return 0;
}
