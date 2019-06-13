#include <iostream>
#include <string>
using namespace std;

void iquote(int n)
{
	cout << "\"" << n << "\"";
}
void iquote(double x)
{
	cout << '"' << x << '"';
}
void iquote(const char *str)
{
	cout << "\"" << str << "\"";
}

int main()
{

	return 0;
}