#include <iostream>
#include <string>
using namespace std;

double hmean(double a, double b);
int main()
{
	double x, y, z;
	cout << "�μ��� �Է�: ";
	while (cin>>x>>y)
	{
		try {
			z = hmean(x, y);
		}
		catch(const char * s){
			cout << s << endl;
			cout << "�� ���� ���� �Է� :";
			continue;
		}
		cout << x << ", " << y << "�� ��ȭ����� " << z << "�Դϴ�" << endl;
		cout << "�ٸ� �� �� �Է�(�������� q) : ";

	}
	cout << "EXIT" << endl;
	return 0;
}

double hmean(double a, double b)
{
	if (a == -b)
		throw "�߸��� hmean() �Ű�����: a = -b�� ������ �ʽ��ϴ�";

	return 2.0 * a * b / (a+b);
}
