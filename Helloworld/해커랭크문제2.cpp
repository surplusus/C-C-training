#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Complete the diagonalDifference function below.
int diagonalDifference(vector<vector<int>> arr) {
	int sum1 = 0;
	int sum2 = 0;
	int len = arr.size();
	for (int i = 0; i < len; i++)
	{
		sum1 += arr[i][i];
		sum2 += arr[len - i -1][i];
	}

	
	return abs(sum1 - sum2);
}

void plusMinus(vector<int> arr) {
	int plus = 0;
	int minus = 0;
	int zero = 0;
	for (int i = 0; i < arr.size(); i++)
	{
		if (arr[i] > 0)
			plus += 1;
		else if (arr[i] == 0)
			zero += 1;
		else
			minus += 1;
	}
	double size = (double)plus / arr.size();
	cout.setf(ios::showpoint);
	if (plus != 0)  cout << size << endl;
	else	cout << 0 << endl;
	size = (double)minus / arr.size();
	if (minus != 0)  cout << size << endl;
	else	cout << 0 << endl;
	size = (double)zero / arr.size();
	if (zero != 0)  cout << size << endl;
	else	cout << 0 << endl;
}

void miniMaxSum(vector<int> arr) {
	long long totSum = 0;
	long long max, min;
	for (int i = 0; i < arr.size(); i++)
		totSum += arr[i];
	max = 0;
	min = totSum;
	for (int i = 0; i < arr.size(); i++)
	{
		long long tmp = totSum - arr[i];
		if (max <= tmp) max = tmp;
		if (min >= tmp)
			min = tmp;
	}
	cout << min << " " << max;
}

int main()
{
	int n;
	cin >> n;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	vector<vector<int>> arr(n);
	vector<int> arr1(n);
	for (int i = 0; i < n; i++)
	{
		cin >> arr1[i];
	}

	miniMaxSum(arr1);
	return 0;
}