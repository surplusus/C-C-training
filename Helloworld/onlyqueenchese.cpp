#include <iostream>
#include <string>
#include <Windows.h>
#include <cstdlib>
#include <ctime>
using namespace std;
int pos1stIdxX, pos1stIdxY;
int numRendom;
int arrX[8] = { 1,3,5,7,9,11,13,15 };
int arrY[8] = { 0,1,2,3,4,5,6,7 };
void InitChaseMap()
{
	cout << "|-|-|-|-|-|-|-|-|" << endl;
	cout << "|-|-|-|-|-|-|-|-|" << endl;
	cout << "|-|-|-|-|-|-|-|-|" << endl;
	cout << "|-|-|-|-|-|-|-|-|" << endl;
	cout << "|-|-|-|-|-|-|-|-|" << endl;
	cout << "|-|-|-|-|-|-|-|-|" << endl;
	cout << "|-|-|-|-|-|-|-|-|" << endl;
	cout << "|-|-|-|-|-|-|-|-|" << endl;
}
void Gotoxy(int x, int y)
{
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
int FirstQueen(int &pos1stIdxX, int &pos1stIdxY)
{
	Gotoxy(arrX[pos1stIdxX], arrY[pos1stIdxY]);
	return arrY[pos1stIdxY];
}
void YaMe()
{
	int firstX = 1;
	int firstY = 1;
	InitChaseMap();
	int cntQueen = FirstQueen(firstX, firstY);
	for (int i = 0; i < 8; i++)
	{
		int X = (firstX + i) % 8;
		int Y = 2 * X + 1;
		if (Y > 7)
			Y -= 9;

		Gotoxy(arrX[X], arrY[Y]);
		cout << 'O';

	}
}
int main()
{
	srand((unsigned int)time(0));
	numRendom = rand() % 8;
	YaMe();

	Gotoxy(20, 20);
	return 0;
}