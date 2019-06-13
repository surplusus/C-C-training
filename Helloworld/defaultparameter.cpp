#include <iostream>
#include <string>
using namespace std;
const int ArSize = 80;
char *left(const char *str, int n = 1)
{
	if (n < 0)
		n = 0;
	char *p = new char[n + 1];
	// str[i]에 글자가 있으면 복사한다
	int i;
	for (i = 0; i < n && str[i]; i++)
		p[i] = str[i];
	while (i <= n)
		p[i++] = '\0';
	return p;
}
void asdfasdf();
int main()
{
	char sample[ArSize];
	cout << "Insert a String\n";
	cin.get(sample, ArSize);
	char *ps = left(sample, 4);
	cout << ps << endl;
	delete[] ps;
	ps = left(sample);
	cout << ps << endl;
	delete[] ps;
	return 0;
	return 0;
}

void asdfasdf()
{
	cout << "조은뎀!" << endl;
	return;
}
