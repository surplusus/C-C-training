#include "stdafx.h"
#include <float.h>
#include <conio.h>

int main()
{
	int nAge = 0;
	char sName[16] = { 0 };

	//printf("���̸� �Է��ϼ��� : ");
	//scanf("%d", &nAge);
	//
	//printf("\n�̸��� �Է��ϼ��� : ");
	//scanf("%s", &sName);
	//// gets_s(sName, sizeof(sName)); - �̰� �ȵȴ�.
	//// ���̸� �Է¹ް� ģ EnterŰ�� �Բ� buffer�� ���� �����̴�. 
	//// gets�� puts�� ���۸� �״�� �޾ƿ´�. 
	//
	//printf("����� �̸��� \'");
	//printf("%s", sName);
	//printf("\'�̰� ���̴� %d�� �Դϴ�. \n", nAge);

	/*---------------_fgetchar() �Լ����-----------------------*/

	printf("���̸� �Է��ϼ��� : ");
	scanf("%d", &nAge);
	
	_fgetchar();  //���۸� �ʱ�ȭ�ϴ� �Լ�

	printf("\n�̸��� �Է��ϼ��� : ");
	gets_s(sName, sizeof(sName));

	printf("����� �̸��� \'");
	printf("%s", sName);
	printf("\'�̰� ���̴� %d�� �Դϴ�. \n", nAge);


	//flush �Լ��� �����غ���

	return 0;
}
