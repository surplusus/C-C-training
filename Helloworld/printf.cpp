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

	printf("%c \n", 'A');
	printf("%c \n", 'A' + 1);
	printf("%c \n", 65);

	// %u(unsigned decimal)
	printf("%d\n", -10);
	printf("%u\n", -10);
	printf("%d\n", -10);
	printf("%u\n", -10);

	// %+d(������ +��ȣ�� ���δ�)
	printf("%+d %+d \n", 1234, -5678);

	// 8ĭ ������ ����� ������ ����
	printf("%8d \n", 11234);
	// 8ĭ ������ ����� ���� ����
	printf("%-8d \n", 11234);
	// 8ĭ ������ ����� ������ ���� �� ������� 0���� ä��
	printf("%08d \n", 11234);

	// �Ҽ��� 3�ڸ����� ǥ�� (cf �ڸ��� �Ѿ�ٸ� �ݿø�)
	printf("%.3f \n", 123.456);


	return 0;
}