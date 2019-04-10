// "" 로 헤더파일을 검색하면 현재폴더에서 찾는다.
#include "stdafx.h"
// <> 로 헤더파일을 검색하면 컴파일러 프로그램 폴더에서 찾는다. 
#include <float.h>

int main()
{
	double dData = 123.456;

	printf("%f \n", dData);
	// float.h 헤더에 있는 최대값과 최소값 예제
	printf("%E - %E \n", DBL_MIN, DBL_MAX);

	return 0;
}