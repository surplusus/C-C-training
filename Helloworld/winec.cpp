#include "wineh.h"
#include <vector>
using namespace std;


Wine::Wine(const char * s, int n, const int yr[], const int bot[]) : name(s), info(n, n)
{
	info.first = ArrayInt(yr, n);
	info.second = ArrayInt(bot, n);
	aSize = n;
	/*  ���� ȿ��
	for (int i = 0; i < aSize; i++)
	{
		info.first[i] = yr[i];
		info.second[i] = bot[i];
	}
	*/

}

void Wine::GetBottles()
{
	cout << aSize << "�Ⱓ�� " << name << " �����͸� �Է��Ͻÿ� :\n";
	for (int i = 0; i < aSize; i++)
	{
		int a;
		cout << "�⵵�� �Է��Ͻÿ�: ";
		cin >> info.first[i];
		cout << "������ �Է��Ͻÿ�: ";
		cin >> info.second[i];
	}
}

void Wine::Show()
{
	cout << "����: " << name << endl;
	cout << "\t" << "�⵵" << "\t" << "����" << endl;
	for (int i = 0; i < aSize; i++)
	{
		cout << "\t" << info.first[i] << "\t" << info.second[i] << endl;
	}
}


void main()
{
	cout << "���� �̸��� �Է��Ͻÿ�: ";
	char lab[50];
	cin.getline(lab, 50);
	cout << "��Ȯ �⵵ ������ �Է��Ͻÿ�: ";
	int yrs;
	cin >> yrs;
	valarray<int> a(10);
	Wine holding(lab, yrs);
	holding.GetBottles();
	holding.Show();

	const int YRS = 3;
	int y[YRS] = { 1993,1995,1998 };
	int b[YRS] = { 48,60,72 };
	Wine more("Gushing Grape Red", YRS, y, b);
	more.Show();
	cout << more.Label() << " ��ü ����" << ": " << more.Sum() << endl;
	cout << "���α׷��� �����մϴ�.\n";
}