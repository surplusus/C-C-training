#include <iostream>
#include <string>
#include <fstream> // file I/O 지원
#include <cstdlib> // exit() 지원
using namespace std;

int main()
{
	char * pFileName = "calc.txt";
	//string nFileName = "calt";
	ifstream inFile;
	inFile.open(pFileName);
	if (!inFile.is_open())
	{
		cout << "열리지 않습니다." << endl;
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
		cout << "입력이 끝났습니다" << endl;
	else if (inFile.fail())
		cout << " 테이터가 불일치 합니다" << endl;
	else
		cout << "알 수 없는 이유로 입력이 종료되었습니다" << endl;

	cout << sum << endl;
}