#include <iostream>
#include <string>
#include <fstream> // file I/O ����
#include <cstdlib> // exit() ����
using namespace std;

int main()
{
	char * pFileName = "calc.txt";
	//string nFileName = "calt";
	ifstream inFile;
	inFile.open(pFileName);
	if (!inFile.is_open())
	{
		cout << "������ �ʽ��ϴ�." << endl;
		return 0;
	}
	//if (inFile.peek())

	string s;
	string sum;
	int cnt = 0;
	inFile >> s;
	while (inFile.good())
	{
		++cnt;
		sum += s;
		inFile >> s;
	}
	if (inFile.eof())
		cout << "�Է��� �������ϴ�" << endl;
	else if (inFile.fail())
		cout << " �����Ͱ� ����ġ �մϴ�" << endl;
	else
		cout << "�� �� ���� ������ �Է��� ����Ǿ����ϴ�" << endl;

	cout << sum << endl;
}