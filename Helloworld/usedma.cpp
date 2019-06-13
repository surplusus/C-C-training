#include <iostream>
#include <string>
#include "dma.h"
using namespace std;

int main()
{
	baseDMA shirt("Portabelly", 8);
	lacksDMA balloon("red", "Blimpo", 4);
	hasDMA map("Mercator", "Buffalo Keys", 5);
	cout << "print baseDMA object" << endl;
	cout << shirt << endl;
	cout << "print lacksDMA object" << endl;
	cout << balloon << endl;
	cout << "print hasDMA object" << endl;
	cout << map << endl;
	lacksDMA balloon2(balloon);
	cout << "copy lacksDMA" << endl;
	cout << balloon2 << endl;
	hasDMA map2;
	map2 = map;
	cout << "copy hasDMA" << endl;
	cout << map2 << endl;
	return 0;
}