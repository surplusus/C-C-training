#include "stdafx.h"

int main()
{
	
	// int printf(const char* const_format, ....);
	// const = "" �ǹ� // const ���� ���ڴ� char �����͸� ����
	// ret�� �ʱ�ȭ
	int ret = 0;

	char ch = 'a';
	int a = 1;
	float b = 2.0f;
	double c = 3;

	ret = printf("%d %d %d %d \n", sizeof(ch), sizeof(a), sizeof(b), sizeof(c));

	// printf�� ���̸� int�� ���� 
	
	printf("%d \n", ret);

	// ���� ret�� ���� �ּ� ǥ��
	printf("%p \n", ret);

	// ���ڿ� ǥ��
	printf("%s \n", "heoow");

	// %c(����) %d(10����) %f(�Ǽ�) %s(���ڿ�) %p(�ּ�)
	// \a(�Ҹ�) \b(�齺���̽�) \n(�ٹٲ�) \f(�������ٲ�) \t(Tab����) \v(����Tab����) \\(\���ڿ�) \"("���ڿ�)
	return 0;
}