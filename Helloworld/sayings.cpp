#include <iostream>
#include <string>
#include "strngbad.h"
using namespace std;
const int ArSize = 10;
const int MaxLen = 81;
int main()
{
	String name;
	cout << "안녕하십니까? 성함이 어떻게 되십니까?\n>> ";
	cin >> name;

	cout << name << " 씨! 간단한 영어 속담 " << ArSize << "개만 입력해 주십시오 (끝내려면 Enter):\n";
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
		cout << "(다음과 같은 속담들을 입력하셨습니다.)\n";
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
		cout << "가장 짧은 속담:\n" << sayings[shortest] << endl;
		cout << "사전순으로 가장 앞에 나오는 속담:\n" << sayings[first] << endl;
		cout << "모두 " << String::HowMany() << "개의 객체 사용" << endl;
	}
	else
		cout << "입력 금지! 이상!" << endl;
	return 0;
}