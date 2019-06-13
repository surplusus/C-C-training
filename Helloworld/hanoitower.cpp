#include <iostream>
#include <string>
#include <bitset>
using namespace std;
enum Col
{
	colA = 1, colB, colC
};
int column[3] = { 0, };
int cnt = 0;

void MoveSize(int size, char From, char To)
{
	cout << "size : " << size << " From " << From << " To " << To<<endl;
}
int HanoiTower(int size, char from, char to, char via)
{
	cnt++;
	if (size == 1)
		MoveSize(1, from, to);
	else
	{
		HanoiTower(size - 1, from, via, to);
		MoveSize(size, from, to);
		HanoiTower(size - 1, via, to, from);
	}
	
	return 0;
}

int main()
{
	int input;
	cin >> input;
	HanoiTower(input, 'A', 'B', 'C');
	return 0;
}