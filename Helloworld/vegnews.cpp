#include <iostream>

#include "strngbad.h"
void callme1(StringBad &);
void callme2(StringBad);

int main()
{
	using namespace std;
	{
		cout << "���� ����� �����Ѵ�." << endl;
		StringBad headline1("Celery Stalks at Midnight");
		StringBad headline2("Lettuce Prey");
		StringBad sports("Spinach Leaves Bowl for Dollars");

		cout << "headline1: " << headline1 << endl;
		cout << "headline2: " << headline2 << endl;
		cout << "sports: " << sports << endl;
		callme1(headline1);
		cout << "headline1: " << headline1 << endl;
		callme2(headline2);
		cout << "headline2: " << headline2 << endl;
		cout << "�ϳ��� ��ü�� �ٸ� ��ü�� �ʱ�ȭ : \n";
		StringBad sailor = sports;
		cout << "sailor: " << sailor << "\n";
		cout << "�ϳ��� ��ü�� �ٸ� ��ü�� ���� : \n";
		StringBad knot;
		knot = headline1;
		cout << "knot: " << knot << endl;
		cout << "����� �������´�. \n";
	}
	cout << "main()�� ��\n";

	return 0;
}