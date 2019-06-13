#include "workermi.h"
using namespace std;
const int SIZE = 5;
int main()
{
	Worker * lolas[SIZE];

	int ct;
	for (ct = 0; ct < SIZE; ++ct)
	{
		char choice;
		cout << "직종 입력 : \n"
			<< "w: waiter   s: singer    "
			<< "t: Singingwaiter    q: EXIT\n";
		cin >> choice;
		while (strchr("wstq",choice) == NULL)
		{
			cout << "w, s, t, q 중에서 하나를 선택하세요 : ";
			cin >> choice;
		}
		if (choice == 'q')
			break;
		switch (choice)
		{
		case 'w':
			lolas[ct] = new Waiter;
			break;
		case 's':
			lolas[ct] = new Singer;
			break;
		case 't':
			lolas[ct] = new SingingWaiter;
			break;
		default:
			break;
		}
		cin.get();
		lolas[ct]->Set();
	}
	cout << "\n사원 현황은 다음과 같습니다 : \n";
	int i;
	for (i = 0; i < ct; ++i)
	{
		cout << endl;
		lolas[i]->Show();
	}
	for (i = 0; i < ct; ++i)
		delete lolas[i];
	cout << " 프로그램 종료 " << endl;
	return 0;
}