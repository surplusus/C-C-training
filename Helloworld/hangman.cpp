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
	cout << "�����ؼ� �� ���� �Է� : " << strUser << " > ";
	do
	{
		// hangman �κ�
		while (cin >> input)
		{
			// �Է� char�� ��� �����ϰ� ����ȰͰ� ������ Ȯ��
			if (inputmem.find(input) != std::string::npos)	// find�Լ��� ã�±��ڰ� ������ npos��ȯ
			{
				cout << input << " �� �̹� ��ý��ϴ�" << endl;
				cout << "�����ؼ� �� ���� �Է� : " << strUser << " > ";
				cntWrong += 1;
				continue;
			}
			inputmem += input;
			// ���ڰ� ���� �ڸ��� Flag(correct) üũ
			Hangman(stranswer[chosenIdx], input, correct);	
			// strUser = PrintAns(stranswer[chosenIdx], correct, len);
			// üũ�� Flag�� ���
			if (!CheckAns(stranswer[chosenIdx], strUser, correct))
				cntWrong += 1;

			if (strUser == stranswer[chosenIdx])	
				break;
			cout << "�����ؼ� �� ���� �Է� : " << strUser << " > ";
		}
		// ���
		cout << "�����Դϴ�  /  " << cntWrong << " �� Ʋ�Ƚ��ϴ�" << endl;
		// �ٽ� �ϰڴ�?
		cout << "����Ͻðڽ��ϱ�? (y / n) : ";
		cin >> input;
		if (input == 'n')
			return 0;
		if (input == 'y')
			cout << "��� �մϴ�" << endl;
		else
			cout << "�߸� �Է��ؼ� ����մϴ�" << endl;
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
