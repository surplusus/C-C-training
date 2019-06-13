#include <iostream>
using namespace std;

int main()
{
	int data[7] = { 6,4,1,7,3,9,8 };
	int tmp;
	for (int i = 0; i < 6; i++)
	{
		for (int k = 0; k < 7; k++)
			cout << data[k] << " ";
		cout << endl; 
		
		for (int j = i+1; j > 0; j--)
		{
			if (data[j] < data[j-1])
			{
				tmp = data[j-1];
				data[j-1] = data[j];
				data[j] = tmp;
			}
		}
	}
	return 0;
}