#include "stock10.h"

#include <iostream>
#include <string>
using namespace std;

Stock::Stock()
{
	std::cout << "디폴트 생성자가 호출되었습니다. \n";
	company = "no name";
	shares = 0;
	share_val = 0.0;
	total_val = 0.0;
}

Stock::Stock(const std::string & co, long n, double pr)
{
	std::cout << co << "를 사용하는 생성자가 호출되었습니다.\n";
	company = co;

	if (n < 0)
	{
		std::cerr << "주식 수는 음수가 될 수 없으므로, "
			<< company << " shares를 0으로 설정합니다 \n";
		shares = 0;
	}
	else
		shares = n;
	share_val = pr;
	set_tot();
}

Stock::~Stock()
{
	std::cout << "안녕, " << company << "!\n";
}

int main()
{
	{
		using std::cout;
		cout << "생성자를 사용하여 새로운 객체들을 생성한다. \n";
		Stock stock1("NanoSmart", 12, 20.0);
		stock1.show();
		Stock stock2 = Stock("Boffo Objects", 2, 2.0);
		stock2.show();

		cout << "stock1을 stock2에 대입한다. \n";
		stock2 = stock1;
		cout << "stock1과 stock2를 출력한다. \n";
		stock1.show();
		stock2.show();

		cout << "생성자를 사용하여 객체를 재설정한다. \n";
		stock1 = Stock("Nifty Foods", 10, 50.0);
		cout << "갱신된 stock1: \n";
		stock1.show();
		cout << "프로그램 종료합니다.\n";
	}
	return 0;
	return 0;
}