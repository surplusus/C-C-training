#include <iostream>
#include <string>
#include <cctype>
#include "stacktp.h"
using namespace std;

int main()
{
	Stack<string> st;
	char ch;
	string po;
	cout << "�ֹ����� �߰��Ϸ��� A, �ֹ����� ó���Ϸ��� P, \n"
		<< "�����Ϸ��� Q�� �Է��ϼ���. \n";
	while (cin >> ch && toupper(ch) != 'Q')
	{
		while (cin.get() != '\n')
			continue;
	}
	switch (ch)
	{
	case 'A':
	case 'a':
		cout << "�߰��� �ֹ��� ��ȣ �Է� : ";
		cin >> po;
		if (st.isfull())
			cout << "������ ����\n";
		else
			st.push(po);
		break;
	case 'P':
	case 'p':
		if (st.isempty())
			cout << "������ �����\n";
		else
		{
			st.pop(po);
			cout << "#" << po << "�ֹ��� ó��";
			break;
		}
		cout << "�ֹ����� �߰��Ϸ��� A, �ֹ����� ó���Ϸ��� P, \n"
			<< "�����Ϸ��� Q�� �Է��ϼ���. \n";
	default:
		break;
	}
	cout << "����\n";
	return 0;
}