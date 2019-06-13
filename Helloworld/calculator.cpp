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
int prior[6];	// 우선순위 배열

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
	// 파일 불러오기
	ifstream inFile;
	inFile.open("cal.txt");
	// 파일 오류 판단하기
	if (!inFile.is_open())
	{
		cout << "파일이 없습니다" << endl;
		exit(EXIT_FAILURE);
	}
	if (inFile.eof())
	{
		cout << "입력이 없습니다" << endl;
		exit(EXIT_FAILURE);
	}
	// 파일 입력 시작
	string s;
	inFile >> s;

	for (int i = 0; i < s.size(); i++)
	{

	}

}