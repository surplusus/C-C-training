#include <iostream>
using namespace std;
const int Max = 5;

int fill_array(double ar[], int limit);
void show_array(const double ar[], int n);
void revalue(double r, double ar[], int n);

int main()
{
	double properties[Max];
	int size = fill_array(properties, Max);
	show_array(properties, size);
	if (size > 0)
	{
		cout << "�������� �Է��Ͻÿ� : ";
		double factor;
		while (!(cin >> factor))
		{
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "�߸��Է��߽��ϴ�, ��ġ�� �Է��ϼ��� : ";
			
		}
		revalue(factor, properties, size);
		show_array(properties, size);
	}
	cout << "���α׷��� �����մϴ�\n";
	cin.get();
	cin.get();
	return 0;

}
int fill_array(double ar[], int limit)
{
	double temp;
	int i;
	for (i = 0; i < limit; i++)
	{
		cout << (i + 1) << "�� �ε����� ����: $";
		cin >> temp;
		if (!cin)
		{
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "�Է� �ҷ�, �Է°����� �����ڽ��ϴ�\n";
			break;
		}
		else if (temp < 0)
			break;
		ar[i] = temp;
	}
	return i;
}
void show_array(const double ar[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << (i + 1) << "�� �ε���: $";
		cout << ar[i] << endl;
	}
}
void revalue(double r, double ar[], int n)
{
	for (int i = 0; i < n; i++)
		ar[i] *= r;
}