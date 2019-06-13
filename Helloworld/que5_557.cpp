#include <iostream>
#include <string>
using namespace std;

template <typename T>
T max5(const T n1, const T n2, const T n3, const T n4, const T n5)
{
	T tmp = 0;
	T n[5] = { n1, n2, n3, n4, n5 };
	for each(T i in n)
	{
		if (tmp < i)
			tmp = i;
	}
	return tmp;
}

int main()
{
	int nMax = max5(5, 8, 3, 2, 6);
	double dMax = max5(5.4, 71.5, 6.4, 1.0, 546.2);
	cout << nMax << endl;
	cout << dMax << endl;
	return 0;
}