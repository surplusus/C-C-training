#include "studentc.h"

using namespace std;

void Set(Student & sa, int n);

const int pupils = 3;
const int quizzes = 5;

int main()
{
	Student ada[pupils] =
		{ Student(quizzes), Student(quizzes), Student(quizzes) };
	int i;
	for (i = 0; i < pupils; ++i)
		Set(ada[i], quizzes);
	cout << "\n학생 리스트 : \n";
	for (i = 0; i < pupils; ++i)
	{
		cout << endl << ada[i];
		cout << "평균: " << ada[i].Average() << endl;
	}
	cout << "프로그램 종료" << endl;
	return 0;
}

void Set(Student & sa, int n)
{
	cout << "학생 이름 입력 : ";
	getline(cin, sa);
	cout << n << "회에 걸친 시험 점수 모두 입력 : " << endl;
	for (int i = 0; i < n; ++i)
		cin >> sa[i];
	while (cin.get() != '\n')
		continue;
}
