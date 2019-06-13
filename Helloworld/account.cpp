#include "account.h"
#include <iostream>
#include <string>
using namespace std;

void Account::creatAccount(const string & _name, const string & _num_depo, const double & _balance)
{
	//name = _name;
	//num_depo = _num_depo;
	//balance = _balance;
	this->balance = _balance;
	this->name = _name;
	this->num_depo = _num_depo;
	
	cout << name << "의 이름으로 계좌 \"" << num_depo << "\"" << "에 계좌가 만들어져, 잔액은 " << balance << " 원입니다." << endl;

}

void Account::deposit(const double & num)
{
	balance += num;
	cout << num << " 원이 입금되어 잔액은 " << balance << "입니다." << endl;

}

void Account::withdraw(const double & num)
{
	if (this->balance < num)
	{
		cout << "잔액보다 큰 수를 인출할 수 없습니다." << endl;
		return;
	}
	balance -= num;
	cout << num << " 원이 출금되어 잔액은 " << balance << "입니다." << endl;

}

void Account::show()
{
	cout << name << "의 계좌 \"" << num_depo << "\"" << "안에 잔액은 " << balance << " 원입니다." << endl;

}

