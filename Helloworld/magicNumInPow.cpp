#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool CheckNum(long long n)
{
	long long digit = 10;
	while (n / digit)
		digit *= 10;
	
	long long tmp = n * n;
	long long nn = tmp % digit;
	if (nn == n)
		return true;
	else
		return false;
}

int main()
{
	vector<long long> result;
	int range;
	cin >> range;
	long long nextNum = 1;
	result.push_back(1);
	for (long long i = 5; i < range; i += nextNum)
	{
		if (CheckNum(i))
		{
			nextNum *= 10;
			result.push_back(i);
		}
	}
	nextNum = 1;
	for (long long i = 6; i < range; i += nextNum)
	{
		if (CheckNum(i))
		{
			nextNum *= 10;
			result.push_back(i);
		}
	}
	sort(result.begin(), result.end());
	for (int i = 0; i < result.size(); i++)
		cout << result[i] << endl;
	return 0;
}