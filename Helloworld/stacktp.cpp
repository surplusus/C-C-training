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
	cout << "주문서를 추가하려면 A, 주문서를 처리하려면 P, \n"
		<< "종료하려면 Q를 입력하세요. \n";
	while (cin >> ch && toupper(ch) != 'Q')
	{
		while (cin.get() != '\n')
			continue;
	}
	switch (ch)
	{
	case 'A':
	case 'a':
		cout << "추가할 주문서 번호 입력 : ";
		cin >> po;
		if (st.isfull())
			cout << "스택이 가득\n";
		else
			st.push(po);
		break;
	case 'P':
	case 'p':
		if (st.isempty())
			cout << "스택이 비었음\n";
		else
		{
			st.pop(po);
			cout << "#" << po << "주문서 처리";
			break;
		}
		cout << "주문서를 추가하려면 A, 주문서를 처리하려면 P, \n"
			<< "종료하려면 Q를 입력하세요. \n";
	default:
		break;
	}
	cout << "종료\n";
	return 0;
}