#include <iostream>
#include <string>
using namespace std;

template<typename T>
void Swap(T & a, T & b)
{
	T tmp;
	tmp = a;
	a = b;
	b = tmp;
}

struct job
{
	char name[40];
	double salary;
	int floor;
};
template <> void Swap<job>(job &j1, job &j2);
void Show(job &j1)
{
	cout << j1.name << ": (" << j1.floor << "���� ����) " << "$" << j1.salary << endl;
}
int main()
{
	cout.precision(2);
	cout.setf(ios::fixed, ios::floatfield);
	int i = 10, j = 20;
	cout << "i, j = " << i << ", " << j << ".\n";
	cout << "�����Ϸ��� ������ int �� ��ȯ�⸦ ����ϸ�" << endl;
	Swap(i, j);
	cout << "���� i, j = :" << i << ", " << j << ".\n";

	job sue = { "Susan Yaffee", 7300.60,7 };
	job sidney = { "Sidney Taffee", 78060.72,9 };
	cout << "job ��ȯ �� : \n";
	Show(sue);
	Show(sidney);
	Swap(sue, sidney);
	cout << "job ��ȯ�� : \n";
	Show(sue);
	Show(sidney);
	decltype(sue) x;
	return 0;
}

template<>
void Swap(job & j1, job & j2)
{
	double t1;
	int t2;
	t1 = j1.salary;
	j1.salary = j2.salary;
	j2.salary = t1;
	t2 = j1.floor;
	j1.floor = j2.floor;
	j2.floor = t2;

}
