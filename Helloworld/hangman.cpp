#include <iostream>
#include <ctime>
#include <string>
using namespace std;

void Hangman(string str, char input, int & correct);
string PrintAns(string str, const int & correct, int len);
int CheckAns(const string anw, string & user, const int & correct);

int main()
{
	int i;
	string strUser;
	string stranswer[5] = { "ah", "way", "quit", "night", "lonely" };
	
	srand(unsigned int(time(NULL)));

	// Initiation
	int chosenIdx (rand() % 5);
	const int len (stranswer[chosenIdx].length());
	for (i = 0; i < len; i++)
		strUser += '*';

	char input;
	string inputmem{};
	int cntWrong = 0;
	int correct = 0;
	cout << "추측해서 한 글자 입력 : " << strUser << " > ";
	do
	{
		// hangman 부분
		while (cin >> input)
		{
			// 입력 char를 모두 저장하고 저장된것과 같은지 확인
			if (inputmem.find(input) != std::string::npos)	// find함수는 찾는글자가 없을때 npos반환
			{
				cout << input << " 은 이미 써봤습니다" << endl;
				cout << "추측해서 한 글자 입력 : " << strUser << " > ";
				cntWrong += 1;
				continue;
			}
			inputmem += input;
			// 글자가 맞은 자리에 Flag(correct) 체크
			Hangman(stranswer[chosenIdx], input, correct);	
			// strUser = PrintAns(stranswer[chosenIdx], correct, len);
			// 체크된 Flag를 출력
			if (!CheckAns(stranswer[chosenIdx], strUser, correct))
				cntWrong += 1;

			if (strUser == stranswer[chosenIdx])	
				break;
			cout << "추측해서 한 글자 입력 : " << strUser << " > ";
		}
		// 결과
		cout << "정답입니다  /  " << cntWrong << " 번 틀렸습니다" << endl;
		// 다시 하겠니?
		cout << "계속하시겠습니까? (y / n) : ";
		cin >> input;
		if (input == 'n')
			return 0;
		if (input == 'y')
			cout << "계속 합니다" << endl;
		else
			cout << "잘못 입력해서 계속합니다" << endl;
	} while (true);
	return 0;
}

void Hangman(string str, char input, int & correct)
{
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == input)
			correct += 1 << i;
	}
}
string PrintAns(string str, const int & correct, int len)
{
	string ans = {};
	for (int i = 0; i < len; i++)
	{
		if (correct & (1 << i))
			ans += str[i];
		else
			ans += '*';
	}
	return ans;
}

int CheckAns(const string anw, string & user, const int & correct)
{
	string tmp = user;
	for (int i = 0; i < anw.length(); i++)
	{
		if (correct & (1 << i))
			user[i] = anw[i];
	}
	if (tmp == user)
		return 0;
	else
		return 1;
}
