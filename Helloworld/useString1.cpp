#include <string>
#include "string1.h"
using namespace std;

int main()
{
	string1 s1(" and i am a C++ student.");
	string1 s2 = "영문 이름을 입력하십시오: ";
	string1 s3;
	cout << s2;
	cin >> s3;
	s2 = "My name is " + s3;
	cout << s2 << ".\n";
	s2 = s2 + s1;
	s2.stringup();
	cout << "다음 문자열에서는 \n" << s2 << "\n문자 'A'가 "
		<< s2.has('A') << "개 들어있습니다.\n";
	s1 = "red";
	string1 rgb[3] = { string1(s1), string1("green"),string1("blue") };
	cout << "빛의 삼원색의 이름을 하나만 입력하십시오 : ";
	string1 ans;
	bool success = false;
	while (cin >> ans)
	{
		ans.stringlow();
		for (int i = 0; i < 3; i++)
		{
			if (ans == rgb[i])
			{
				cout << "맞았습니다! \n";
				success = true;
				break;
			}
		}
		if (success)
			break;
		else
			cout << "다시 입력하십시오: ";
	}
	cout << "프로그램을 종료합니다. \n";
	return 0;
}