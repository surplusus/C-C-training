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
	const char * mesg() { return "gmean() �Ű��������� >= 0 �Դϴ�. \n"; }
};

double hmean(double a, double b) throw(bad_hmean);
double gmean(double a, double b) throw(bad_gmean);

int main()
{
	double x, y, z;
	cout << "�� ���� �Է� : ";
	while (cin >> x >> y)
	{
		try {
			z = hmean(x, y);
			cout << x << ", " << y << "�� ��ȭ��� " << z << endl;
			cout << x << ", " << y << "�� ������� " << gmean(x, y) << endl;
			cout << "�ٸ� �μ� �Է� (�������� q) : ";
		}
		catch (bad_hmean & bg)
		{
			bg.mesg();
			cout << "�ٽ� �Ͻʽÿ�.\n";
			continue;
		}
		catch (bad_gmean & hg)
		{
			cout << hg.mesg();
			cout << "Values used: " << hg.v1 << ", " << hg.v2 << endl;
			cout << "�� �̻� ������ �� �����ϴ�.\n";
			break;
		}
	}
	cout << "���α׷�����" << endl;
	return 0;
}

void bad_hmean::mesg()
{
	cout << "hmean(" << v1 << ", " << v2 << "): " << "�߸��� �Ű�����: a = -b\n";
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