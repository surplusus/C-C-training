#include <iostream>
#include <string>
#include "strngbad.h"
using namespace std;
const int ArSize = 10;
const int MaxLen = 81;
int main()
{
	String name;
	cout << "�ȳ��Ͻʴϱ�? ������ ��� �ǽʴϱ�?\n>> ";
	cin >> name;

	cout << name << " ��! ������ ���� �Ӵ� " << ArSize << "���� �Է��� �ֽʽÿ� (�������� Enter):\n";
	String sayings[ArSize];
	char tmp[MaxLen];
	int i;
	for (i = 0; i < ArSize; i++)
	{
		cout << i + 1 << ": ";
		cin.get(tmp, MaxLen);
		while (cin && cin.get() != '\n')
			continue;
		if (!cin || tmp[0] == '\0')
			break;
		else
			sayings[i] = tmp;
	}
	int total = i;
	
	if (total > 0)
	{
		cout << "(������ ���� �Ӵ���� �Է��ϼ̽��ϴ�.)\n";
		for (i = 0; i < total; i++)
			cout << sayings[i][0] << ": " << sayings[i] << endl;

		int shortest = 0;
		int first = 0;
		for (i = 0; i < total; i++)
		{
			if (sayings[i].length() < sayings[shortest].length())
				shortest = i;
			if (sayings[i] < sayings[first])
				first = i;
		}
		cout << "���� ª�� �Ӵ�:\n" << sayings[shortest] << endl;
		cout << "���������� ���� �տ� ������ �Ӵ�:\n" << sayings[first] << endl;
		cout << "��� " << String::HowMany() << "���� ��ü ���" << endl;
	}
	else
		cout << "�Է� ����! �̻�!" << endl;
	return 0;
}