#include <iostream>
#include <string>
using namespace std;

void swapr(int &w1, int &w2)
{
	int tmp;
	tmp = w1;
	w1 = w2;
	w2 = tmp;
}
void swapp(int *w1, int *w2)
{
	int tmp;
	tmp = *w1;
	*w1 = *w2;
	*w2 = tmp;
}
void swapv(int w1, int w2)
{
	int tmp;
	tmp = w1;
	w1 = w2;
	w2 = tmp;
}
struct MyStruct
{
	int x;
	int y;
}p1,p2,p3,p4;

int main()
{

	int w1 = 3000;
	int w2 = 5000;

	cout << "wallet 1 = " << w1 << "won";
	cout << "wallet 2 = " << w2 << "won\n";

	cout << "reference value\n";
	swapr(w1, w2);
	cout << "wallet 1 = " << w1 << "won";
	cout << "wallet 2 = " << w2 << "won\n";

	swapp(&w1, &w2);
	cout << "pointer value\n";
	cout << "wallet 1 = " << w1 << "won";
	cout << "wallet 2 = " << w2 << "won\n";

	swapv(w1, w2);
	cout << "normal value\n";
	cout << "wallet 1 = " << w1 << "won";
	cout << "wallet 2 = " << w2 << "won\n";

	long a1 = 10.0, a2 = 20.0;
	swapr(a1, a2);

	return 0;
}