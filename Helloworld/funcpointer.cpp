#include <iostream>
#include <string>
#include <array>
using namespace std;

double gildong(int lns)
{
	return 0.05 * lns;
}
double moonsoo(int lns)
{
	return 0.03 * lns + 0.0004 * lns * lns;
}
void estimate(int lines, double(*pf)(int))
{
	cout << lines << "���� �ۼ��ϴµ� ";
	cout << (*pf)(lines) << "�ð��� �ɸ��ϴ�\n";
}
int main()
{
	int code;

	cout << "�ʿ��� �ڵ��� �� ���� �Է��Ͻʽÿ�. : ";
	cin >> code;
	cout << "ȫ�浿�� �ð����� : \n";
	estimate(code, gildong);
	cout << "�ڹ����� �ð����� : \n";
	estimate(code, moonsoo);

	return 0;
}