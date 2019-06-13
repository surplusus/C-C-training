
#include "workermi.h"
using std::cout;
using std::cin;
using std::endl;

Worker::~Worker() {}

void Worker::Data() const
{
	cout << "사원 이름: " << fullname << endl;
}

void Worker::Get()
{
	getline(cin, fullname);
	cout << "사원 번호 입력 : ";
	cin >> id;
	while (cin.get() != '\n')
		continue;
}

void Waiter::Data() const
{
	cout << "웨이터 등급 : " << panache << endl;
}

void Waiter::Get()
{
	cout << "웨이터 등급 입력 : ";
	cin >> panache;
	while (cin.get() != '\n')
		continue;
}

void Waiter::Set()
{
	cout << "웨이터 이름 입력 : ";
	Worker::Get();
	Get();
}

void Waiter::Show() const
{
	cout << "직종: 웨이터\n";
	Worker::Data();
	Data();
}

void Singer::Data() const
{
	cout << "목소리 유형 : " << pv[voice] << endl;
}

void Singer::Get()
{
	cout << "가수의 목소리 유형 번호를 입력 : \n";
	int i;
	for (i = 0; i < Vtypes; ++i)
	{
		cout << i << ": " << pv[i] << "   ";
		if (i % 4 == 3)
			cout << endl;
	}
	if (i % 4 != 0)
		cout << '\n';
	cin >> voice;
	while (cin.get() != '\n')
		continue;
}

void Singer::Set()
{
	cout << "가수 이름 입력 : ";
	Worker::Get();
	Get();
}

void Singer::Show() const
{
	cout << "직종 : 가수\n";
	Worker::Data();
	Data();
}

void SingingWaiter::Data() const
{
	Singer::Data();
	Waiter::Data();
}

void SingingWaiter::Get()
{
	Waiter::Get();
	Singer::Get();
}

void SingingWaiter::Set()
{
	cout << "가수 겸 웨이터의 이름 입력 : ";
	Worker::Get();
	Get();
}

void SingingWaiter::Show() const
{
	cout << "직종 : 가수 겸 웨이터\n";
	Worker::Data();
	Data();
}

