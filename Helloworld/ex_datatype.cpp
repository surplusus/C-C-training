// "" �� ��������� �˻��ϸ� ������������ ã�´�.
#include "stdafx.h"
// <> �� ��������� �˻��ϸ� �����Ϸ� ���α׷� �������� ã�´�. 
#include <float.h>

int main()
{
	double dData = 123.456;

	printf("%f \n", dData);
	// float.h ����� �ִ� �ִ밪�� �ּҰ� ����
	printf("%E - %E \n", DBL_MIN, DBL_MAX);

	return 0;
}