#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <queue>
#include <stack>
using namespace std;

enum Operator
{
	ADD = '+',
	SUB = '-',
	MUL = '*',
	DIV = '/',
	OPEN_BRACE = '(',
	CLOSE_BRACE = ')'
};

queue<string> postfixQueue;
stack<char> operatorStack;
stack<char> operandStack;
int prior[6];	// �켱���� �迭

void MakePriority()
{
	prior[OPEN_BRACE] = 0;
	prior[CLOSE_BRACE] = 0;
	prior[ADD] = 1;
	prior[SUB] = 1;
	prior[MUL] = 2;
	prior[DIV] = 2;
}

int main()
{
	MakePriority();
	// ���� �ҷ�����
	ifstream inFile;
	inFile.open("cal.txt");
	// ���� ���� �Ǵ��ϱ�
	if (!inFile.is_open())
	{
		cout << "������ �����ϴ�" << endl;
		exit(EXIT_FAILURE);
	}
	if (inFile.eof())
	{
		cout << "�Է��� �����ϴ�" << endl;
		exit(EXIT_FAILURE);
	}
	// ���� �Է� ����
	string s;
	inFile >> s;

	for (int i = 0; i < s.size(); i++)
	{

	}

}