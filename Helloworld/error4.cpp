#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class bad_hmean
{
public:
	bad_hmean(double a = 0, double b = 0) : v1(a), v2(b) {}
	void mesg();
private:
	double v1, v2;
};

class bad_gmean
{
public:
	bad_gmean(double a = 0, double b = 0) : v1(a), v2(b) {}
	double v1,v2;
	const char * mesg() { return "gmean() 매개변수들은 >= 0 입니다. \n"; }
};

double hmean(double a, double b) throw(bad_hmean);
double gmean(double a, double b) throw(bad_gmean);

int main()
{
	double x, y, z;
	cout << "두 수를 입력 : ";
	while (cin >> x >> y)
	{
		try {
			z = hmean(x, y);
			cout << x << ", " << y << "의 조화평균 " << z << endl;
			cout << x << ", " << y << "의 기하평균 " << gmean(x, y) << endl;
			cout << "다른 두수 입력 (끝내려면 q) : ";
		}
		catch (bad_hmean & bg)
		{
			bg.mesg();
			cout << "다시 하십시오.\n";
			continue;
		}
		catch (bad_gmean & hg)
		{
			cout << hg.mesg();
			cout << "Values used: " << hg.v1 << ", " << hg.v2 << endl;
			cout << "더 이상 진행할 수 없습니다.\n";
			break;
		}
	}
	cout << "프로그램종료" << endl;
	return 0;
}

void bad_hmean::mesg()
{
	cout << "hmean(" << v1 << ", " << v2 << "): " << "잘못된 매개변수: a = -b\n";
}

double hmean(double a, double b)
{
	if (a == -b)
		throw bad_hmean(a, b);
	return 2.0 * a * b / (a + b);
}
double gmean(double a, double b)
{
	if (a < 0 || b < 0)
		throw bad_gmean(a, b);
	return sqrt(a*b);
}