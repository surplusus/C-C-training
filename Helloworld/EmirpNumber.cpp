#include <iostream>
#include <string>
#include <queue>
#include <vector>
using namespace std;
queue<int> primeNumQueue;
int IsPalindrome(int n)
{
	char ctmp[10] = { 0, };
	itoa(n, ctmp, 10);
	string strtmp1 = ctmp;
	int cnt = 1;
	for each(char i in ctmp)
	{
		if (i == '\0')
			break;
		if (strtmp1[strtmp1.size() - cnt] != i)
			return 0;
		cnt++;
	}
	return 1;
}
void IsPrimeNum(int endNum)
{
	int primeNum = 1;

	while (true)
	{
		for (int i = primeNum; i >= 1; i--)
		{
			if (i - 1 == 1)
				primeNumQueue.push(primeNum);
			if (primeNum % (i - 1) == 0)
				break;
		}
		if (primeNumQueue.size() == 200)
			break;
	}
}
int main()
{
	IsPrimeNum(5000);
	int nend = primeNumQueue.size();
	for (int i = 0; i < 5000; i++)
	{
		cout << primeNumQueue.front() << '\t';
		primeNumQueue.pop();
	}
	return 0;
}