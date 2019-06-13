#include <iostream>
#include <string>
using namespace std;


#define MAX_STRING 200
int PrintAlltoupper(string str)
{
	getline(cin, str);
	if (str[0] == 'q')
		return 1; // 종료 = 1
	for (int i = 0; i < str.size();i++)
	{
		char tmp = str[i];
		tmp = toupper(tmp);
		str[i] = tmp;
	}
	cout << str << ' ';
	return 0; // 정상종료 = 0
}

int main()
{
	string str1 = {};
	
	//cin.getline(str, 10,'i');  // 10개 입력이 들어올때가지 안끝남
	while (true)
	{
		cout << "문자열을 입력하시오 (끝내려면 q) :";

		if (PrintAlltoupper(str1))
			break;
		cout << endl;
	}

	return 0;
}