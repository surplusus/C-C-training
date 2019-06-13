#include <iostream>
#include <string>
#include <ctime>
using namespace std;

void Shuffle(string &s)
{
	srand((unsigned int)time(NULL));
	string tmp;
	int nFlag = 0;
	int nRan;
	// 글자 수 만큼 Flag 생성
	for (int i = 0; i < s.size(); i++)
		nFlag += 1 << i;
	
	while (nFlag)
	{
		nRan = rand() % s.size();
		if ((1 << nRan) & nFlag)
		{
			tmp += s[nRan];
			nFlag -= 1 << nRan;
		}
	}
	if (s != tmp)
		s = tmp;
	else
		Shuffle(s);
}

int main()
{
	string a = "asdf";
	Shuffle(a);
	cout << a;
	return 0;
}
