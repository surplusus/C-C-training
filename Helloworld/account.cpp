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
	
	cout << name << "�� �̸����� ���� \"" << num_depo << "\"" << "�� ���°� �������, �ܾ��� " << balance << " ���Դϴ�." << endl;

}

void Account::deposit(const double & num)
{
	balance += num;
	cout << num << " ���� �ԱݵǾ� �ܾ��� " << balance << "�Դϴ�." << endl;

}

void Account::withdraw(const double & num)
{
	if (this->balance < num)
	{
		cout << "�ܾ׺��� ū ���� ������ �� �����ϴ�." << endl;
		return;
	}
	balance -= num;
	cout << num << " ���� ��ݵǾ� �ܾ��� " << balance << "�Դϴ�." << endl;

}

void Account::show()
{
	cout << name << "�� ���� \"" << num_depo << "\"" << "�ȿ� �ܾ��� " << balance << " ���Դϴ�." << endl;

}

