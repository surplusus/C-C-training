#include "stdafx.h"

int main()
{
	
	char ch = 0;
	// �迭 �ʱ�ȭ
	char szName[32] = { 0 };

	printf("�̸��� �Է��ϼ��� :  ");
	//gets �� gets_s �� ���� = ����
	// gets_s(szName);
	// gets_s(��������, �޸��Ҵ����)
	gets_s(szName, sizeof(szName));
	printf("����� �̸��� ");
	puts(szName + "�Դϴ�.");
	puts("�Դϴ�. \n");

	return 0;
}