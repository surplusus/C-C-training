#include "wineh.h"
#include <vector>
using namespace std;


Wine::Wine(const char * s, int n, const int yr[], const int bot[]) : name(s), info(n, n)
{
	info.first = ArrayInt(yr, n);
	info.second = ArrayInt(bot, n);
	aSize = n;
	/*  같은 효과
	for (int i = 0; i < aSize; i++)
	{
		info.first[i] = yr[i];
		info.second[i] = bot[i];
	}
	*/

}

void Wine::GetBottles()
{
	cout << aSize << "년간의 " << name << " 데이터를 입력하시오 :\n";
	for (int i = 0; i < aSize; i++)
	{
		int a;
		cout << "년도를 입력하시오: ";
		cin >> info.first[i];
		cout << "수량을 입력하시오: ";
		cin >> info.second[i];
	}
}

void Wine::Show()
{
	cout << "와인: " << name << endl;
	cout << "\t" << "년도" << "\t" << "수량" << endl;
	for (int i = 0; i < aSize; i++)
	{
		cout << "\t" << info.first[i] << "\t" << info.second[i] << endl;
	}
}


void main()
{
	cout << "와인 이름을 입력하시오: ";
	char lab[50];
	cin.getline(lab, 50);
	cout << "수확 년도 개수를 입력하시오: ";
	int yrs;
	cin >> yrs;
	valarray<int> a(10);
	Wine holding(lab, yrs);
	holding.GetBottles();
	holding.Show();

	const int YRS = 3;
	int y[YRS] = { 1993,1995,1998 };
	int b[YRS] = { 48,60,72 };
	Wine more("Gushing Grape Red", YRS, y, b);
	more.Show();
	cout << more.Label() << " 전체 수량" << ": " << more.Sum() << endl;
	cout << "프로그램을 종료합니다.\n";
}