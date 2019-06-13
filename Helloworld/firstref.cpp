#include <iostream>
#include <string>
using namespace std;

int main()
{
	int rats = 101;
	int & rodents = rats;
	cout << "rats = " << rats;
	cout << ", rodents = " << rodents << endl;
	cout << "address of rats = " << &rats;;
	cout << ", address of rodents = " << &rodents << endl;

	int bunnies = 50;
	rodents = bunnies;
	cout << "bunnies = " << bunnies;
	cout << ", rats = " << rats;
	cout << ", rodents = " << rodents << endl;
	cout << "address of bunnies = " << &bunnies;
	cout << ", address of rodents = " << &rodents << endl;


	return 0;
}