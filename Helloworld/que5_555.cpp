#include <iostream>
#include <string>
using namespace std;


#define MAX_STRING 200
int PrintAlltoupper(string str)
{
	getline(cin, str);
	if (str[0] == 'q')
		return 1; // ���� = 1
	for (int i = 0; i < str.size();i++)
	{
		char tmp = str[i];
		tmp = toupper(tmp);
		str[i] = tmp;
	}
	cout << str << ' ';
	return 0; // �������� = 0
}

int main()
{
	string str1 = {};
	
	//cin.getline(str, 10,'i');  // 10�� �Է��� ���ö����� �ȳ���
	while (true)
	{
		cout << "���ڿ��� �Է��Ͻÿ� (�������� q) :";

		if (PrintAlltoupper(str1))
			break;
		cout << endl;
	}

	return 0;
}