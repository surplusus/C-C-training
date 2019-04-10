#include "stdafx.h"
#include <math.h>

// "="을 기준으로 왼쪽을 L_value, 오른쪽을 R_value이다. 
// ex) a(L_value) = 100(R_value);

// 배열로 초기화한 값을 L_value로 사용할 수 없다.(배열로 초기화 한 것은 주소로 표시된다.)
// ex) char sz[32] = { 0 }; sz = 'a'; 안됨.
// ex) char sz[32] = { 0 }; sz[0] = 'a'; 가능

//int main()
//{
//	int x = 10, y = 20, tmp = 0;
//
//	printf("Before : %d %d \n", x, y);
//	tmp = x;
//	x = y;
//	y = tmp;
//	printf("After : %d %d \n", x, y);
//	return 0;
//}
//
//int main()
//{
//	// L_value와 R_value를 나중에 더하거나 빼거나 곱하거나 나누거나
//
//	int nResult = 0, nData = 10;
//	// nResult = nResult + 3;
//	nResult += 3;
//	printf("%d\n", nResult);
//	// nResult = nResult * (nData - 4);
//	nResult *= nData - 4;
//	printf("%d\n", nResult);
//	// nResult = nResult / 2;
//	nResult /= 2;
//	printf("%d\n", nResult);
//	// nResult = nResult - (nData - 5);
//	nResult -= nData - 5;
//	printf("%d\n", nResult);
//	// nResult = nResult % 3;
//	nResult %= 3;
//	printf("%d\n", nResult);
//	return 0;
//}

//int main()
//{
//	int nInput = 0, nTotal = 0;
//
//	scanf("%d", &nInput);
//	nTotal += nInput;
//	scanf("%d", &nInput);
//	nTotal += nInput;
//	scanf("%d", &nInput);
//	nTotal += nInput;
//
//	printf("Total : %d \n", nTotal);
//
//	// float a = M_PI;
//	printf("%f", M_PI);
//
//	
//}

//int main()
//{
//	Solution a = new Solution();
//	return 0;
//}
//
//long long int Solution()
//{
//	return result;
//}

//int main()
//{
//	int x = 10, nResult = 0;
//	nResult = ++x;
//	printf("%d %d \n", nResult, x);
//	printf("%d \n", x);
//	nResult = x--;
//	printf("%d %d \n", nResult, x);
//	printf("%d \n", x);
//	++x;
//	printf("%d \n", x);
//	return 0;
//}
//
//int main()
//{
//	int num1 = 20, num2 = 16;
//	int result;
//	result = num1 ^ num2;
//	printf(" ^=> %d", result << 9);
//	printf(" ^=> %d", result);
//
//}

//int main()
//{
//	int nData = 0x11223344;
//	printf("%08X \n", nData & 0xFFFF0000);
//	printf("%08X \n", nData & 0x00FFFF00);
//	printf("%X \n", nData & 0x0000FFFF);
//	printf("%08X \n", nData & 0xFF0000FF);
//	return 0;
//}

//int main()
//{
//	int nData = 10;
//	printf("%d, %d, %d\n", sizeof(5), sizeof(nData), sizeof(int));
//	printf("%d, %d\n", sizeof('A'), sizeof(char));
//	printf("%d, %d\n", sizeof(123.45F), sizeof(123.45));
//
//	printf("%d, %d\n", sizeof(nData + 10), sizeof(++nData));
//	printf("%d\n", nData);
//	return 0;
//}

//int main()
//{
//	int x = 5, y = 10;
//	printf("%d\n", x == y);
//	printf("%d\n", x != y);
//	printf("%d\n", x > y);
//	printf("%d\n", x < y);
//	printf("%d\n", y >= 10);
//	printf("%d\n", y <= x + 5);
//	printf("\n");
//
//	printf("%d\n", 300 == 299.99999F);
//	printf("%d\n", 300 == 299.99999);
//	printf("%d\n", 300 == 299.9999F);
//	printf("%d\n", 300 == 300.00001F);
//	return 0;
//}

//int main()
//{
//	int nInput = 0, bResult = 0;
//	scanf("%d", &nInput);
//	bResult = nInput < 4 || nInput >= 60;
//	printf("Result : %d (1:True, 0:False)\n", bResult);
//	return 0;
//}

//int main(void)
//{
//	int nAge = 0, nHeight = 0;
//	printf("나이를 입력하세요 : ");
//	scanf("%d", &nAge);
//	printf("키를 입력하세요 : ");
//	scanf("%d", &nHeight);
//	printf("결과 : %d (1:합격, 0:불합격)\n", nAge >= 20 && nAge <= 30 && nHeight >= 150);
//	return 0;
//		
//}

//int main()
//{
//	int nInput, nA;
//	scanf("%d", &nInput);
//	nInput <= 10 ? (nA = 10) : (nA = 20);
//	printf("%d\n", nA);
//}
//
//int main() {
//	char s[10];
//	while (scanf("%[^\n]", s) != -1)
//	{
//		printf("%s\n", s);
//	}
//	return 0;
//}

//int main()
//{
//	int nHeight;
//	char a;
//	printf("키를 입력하세요 : ");
//	scanf("%d", &nHeight);
//	printf((nHeight >= 160) ? "합격\n" : "불합격\n");
//}

//int main()
//{
//	int nMin = 999, nMax = 0;
//	int a = 0, b = 0, c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//
//	(a > b) ? (nMin = b, nMax = a) : (nMin = a, nMax = b);
//	(c > nMax) ? (nMax = c) : (c < nMin) ? (nMin = c) : c=c;
//
//	printf("%d %d\n", nMin, nMax);
//}

int main()
{

	int nMin = 101, nMax = -101;
	int nInput = 0;

	scanf("%d", &nInput);
	nMax = (nInput > nMax) ? nInput : nMax;
	nMin = (nInput < nMin) ? nInput : nMin;
	scanf("%d", &nInput);
	nMax = (nInput > nMax) ? nInput : nMax;
	nMin = (nInput < nMin) ? nInput : nMin;
	scanf("%d", &nInput);
	nMax = (nInput > nMax) ? nInput : nMax;
	nMin = (nInput < nMin) ? nInput : nMin;

	printf("MAX : %d / MIN : %d", nMax, nMin);
	return 0;
}