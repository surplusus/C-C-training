#include <string>
#include "string1.h"
using namespace std;

int main()
{
	string1 s1(" and i am a C++ student.");
	string1 s2 = "���� �̸��� �Է��Ͻʽÿ�: ";
	string1 s3;
	cout << s2;
	cin >> s3;
	s2 = "My name is " + s3;
	cout << s2 << ".\n";
	s2 = s2 + s1;
	s2.stringup();
	cout << "���� ���ڿ������� \n" << s2 << "\n���� 'A'�� "
		<< s2.has('A') << "�� ����ֽ��ϴ�.\n";
	s1 = "red";
	string1 rgb[3] = { string1(s1), string1("green"),string1("blue") };
	cout << "���� ������� �̸��� �ϳ��� �Է��Ͻʽÿ� : ";
	string1 ans;
	bool success = false;
	while (cin >> ans)
	{
		ans.stringlow();
		for (int i = 0; i < 3; i++)
		{
			if (ans == rgb[i])
			{
				cout << "�¾ҽ��ϴ�! \n";
				success = true;
				break;
			}
		}
		if (success)
			break;
		else
			cout << "�ٽ� �Է��Ͻʽÿ�: ";
	}
	cout << "���α׷��� �����մϴ�. \n";
	return 0;
}