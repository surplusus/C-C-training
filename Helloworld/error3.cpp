#include <iostream>
#include <string>
using namespace std;

double hmean(double a, double b);
int main()
{
	double x, y, z;
	cout << "두수를 입력: ";
	while (cin>>x>>y)
	{
		try {
			z = hmean(x, y);
		}
		catch(const char * s){
			cout << s << endl;
			cout << "두 수를 새로 입력 :";
			continue;
		}
		cout << x << ", " << y << "의 조화평균은 " << z << "입니다" << endl;
		cout << "다른 두 수 입력(끝내려면 q) : ";

	}
	cout << "EXIT" << endl;
	return 0;
}

double hmean(double a, double b)
{
	if (a == -b)
		throw "잘못된 hmean() 매개변수: a = -b는 허용되지 않습니다";

	return 2.0 * a * b / (a+b);
}
