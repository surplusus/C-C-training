#include "stock10.h"

#include <iostream>
#include <string>
using namespace std;

Stock::Stock()
{
	std::cout << "����Ʈ �����ڰ� ȣ��Ǿ����ϴ�. \n";
	company = "no name";
	shares = 0;
	share_val = 0.0;
	total_val = 0.0;
}

Stock::Stock(const std::string & co, long n, double pr)
{
	std::cout << co << "�� ����ϴ� �����ڰ� ȣ��Ǿ����ϴ�.\n";
	company = co;

	if (n < 0)
	{
		std::cerr << "�ֽ� ���� ������ �� �� �����Ƿ�, "
			<< company << " shares�� 0���� �����մϴ� \n";
		shares = 0;
	}
	else
		shares = n;
	share_val = pr;
	set_tot();
}

Stock::~Stock()
{
	std::cout << "�ȳ�, " << company << "!\n";
}

int main()
{
	{
		using std::cout;
		cout << "�����ڸ� ����Ͽ� ���ο� ��ü���� �����Ѵ�. \n";
		Stock stock1("NanoSmart", 12, 20.0);
		stock1.show();
		Stock stock2 = Stock("Boffo Objects", 2, 2.0);
		stock2.show();

		cout << "stock1�� stock2�� �����Ѵ�. \n";
		stock2 = stock1;
		cout << "stock1�� stock2�� ����Ѵ�. \n";
		stock1.show();
		stock2.show();

		cout << "�����ڸ� ����Ͽ� ��ü�� �缳���Ѵ�. \n";
		stock1 = Stock("Nifty Foods", 10, 50.0);
		cout << "���ŵ� stock1: \n";
		stock1.show();
		cout << "���α׷� �����մϴ�.\n";
	}
	return 0;
	return 0;
}