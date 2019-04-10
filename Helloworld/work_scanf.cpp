#include "stdafx.h"
#include <float.h>
#include <conio.h>

int main()
{
	float PI = 3.141592f;
	float r = 0; // radius
	float v = 0; // velocity
	float d = 0; // distence
	float t = 0; // time

	printf("반지름과 속력을 입력해주세요 :");
	scanf("%f%f", &r, &v);

	d = 2 * PI * r;
	t = (d / v) * 60.0f;

	printf("%.3f \n", t);
	
	return 0;
}