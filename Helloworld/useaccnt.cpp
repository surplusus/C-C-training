#include "account.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	Account guhyun;
	Account hosung;
	// 계좌 생성
	guhyun.creatAccount("Guhyun", "010*-015", 1000);
	hosung.creatAccount("Hosung", "010*-111", 1000);
	// 입금
	guhyun.deposit(20000);
	hosung.deposit(100000);
	// 출금
	guhyun.withdraw(300000);
	hosung.withdraw(100000);
	// 잔액 보이기
	guhyun.show();
	hosung.show();

	return 0;
}