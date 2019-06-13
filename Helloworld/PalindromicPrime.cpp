#include <iostream>
#include <string>
#include <stack>
#include <vector>
using namespace std;
stack<int> primeNumStack;
int Palindrome(int n)
{
	char ctmp[10] = { 0, };
	itoa(n, ctmp, 10);
	string strtmp = ctmp;
	int cnt = 1;
	for each(char i in ctmp)
	{
		if (i == '\0')
			break;
		if (strtmp[strtmp.size() - cnt] != i)
			return 0;
		cnt++;
	}
	return 1;
}
void PalindromicPrimeNum(int endNum)
{
	int primeNum = 1;

	while (true)
	{
		while (!Palindrome(++primeNum))
		{		}
		
		for (int i = primeNum; i >= 1; i--)
		{
			if (i - 1 == 1)
				primeNumStack.push(primeNum);
			if (primeNum % (i - 1) == 0)
				break;
		}
		if (primeNumStack.size() == 99)
			break;
	}
}
int main()
{
	PalindromicPrimeNum(1000);
	int nend = primeNumStack.size();
	for (int i = 0; i < nend; i++)
	{
		cout << primeNumStack.top() << '\t';
		primeNumStack.pop();
	}
	return 0;
}