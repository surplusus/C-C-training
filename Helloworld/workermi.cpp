
#include "workermi.h"
using std::cout;
using std::cin;
using std::endl;

Worker::~Worker() {}

void Worker::Data() const
{
	cout << "��� �̸�: " << fullname << endl;
}

void Worker::Get()
{
	getline(cin, fullname);
	cout << "��� ��ȣ �Է� : ";
	cin >> id;
	while (cin.get() != '\n')
		continue;
}

void Waiter::Data() const
{
	cout << "������ ��� : " << panache << endl;
}

void Waiter::Get()
{
	cout << "������ ��� �Է� : ";
	cin >> panache;
	while (cin.get() != '\n')
		continue;
}

void Waiter::Set()
{
	cout << "������ �̸� �Է� : ";
	Worker::Get();
	Get();
}

void Waiter::Show() const
{
	cout << "����: ������\n";
	Worker::Data();
	Data();
}

void Singer::Data() const
{
	cout << "��Ҹ� ���� : " << pv[voice] << endl;
}

void Singer::Get()
{
	cout << "������ ��Ҹ� ���� ��ȣ�� �Է� : \n";
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
	cout << "���� �̸� �Է� : ";
	Worker::Get();
	Get();
}

void Singer::Show() const
{
	cout << "���� : ����\n";
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
	cout << "���� �� �������� �̸� �Է� : ";
	Worker::Get();
	Get();
}

void SingingWaiter::Show() const
{
	cout << "���� : ���� �� ������\n";
	Worker::Data();
	Data();
}

