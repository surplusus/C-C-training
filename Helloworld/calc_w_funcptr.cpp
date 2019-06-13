#include <iostream>
#include <string>
using namespace std;

double calculate(double x, double y, double(*pf)(double, double))
{
	double result = pf(x, y);
	return result;
}
double Add(double x, double y)
{
	return x + y;
}
double Sub(double x, double y)
{
	return x - y;
}
double Mul(double x, double y)
{
	return x * y;
}
double Div(double x, double y)
{
	return x / y;
}
int main()
{
	double x, y;
	cin >> x >> y;
	double(*pfarr[4])(double, double) = { Add, Sub, Mul,Div };

	for (int i = 0; i < 4; i++)
		cout << calculate(x, y, pfarr[i]) << endl;

	return 0;
}