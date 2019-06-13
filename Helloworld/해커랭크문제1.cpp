#include <iostream>
#include <string>
using namespace std;
int s[3][3] = {
	{5,3,4},
	{1,6,8},
	{6,4,2}
};
int s_rows = 3;
int s_columns = 3;
int main()
{
	int sum = 0;
	int tmp;
	if (s[1][1] != 5)
		sum += abs(s[1][1] - 5);
	//가로
	for (int i = 0; i < 3; i++)
		tmp = s[1][i];
	if (tmp != 15)
		sum += abs(tmp - 15);
	//세로
	for (int i = 0; i < 3; i++)
		tmp = s[i][1];
	if (tmp != 15)
		sum += abs(tmp - 15);
	//우하향
	for (int i = 0; i < 3; i++)
		tmp = s[i][i];
	if (tmp != 15)
		sum += abs(tmp - 15);
	//우상향
	for (int i = 0; i < 3; i++)
		tmp = s[2-i][i];
	if (tmp != 15)
		sum += abs(tmp - 15);
	cout << sum;
	return 0;
}