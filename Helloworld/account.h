#pragma once
#include <string>

class Account
{
public:
	void show();
	void creatAccount(const std::string & _name, const std::string & _num_depo, const double & _balance);
	void deposit(const double & num);
	void withdraw(const double & num);
private:
	std::string name;
	std::string num_depo;
	double balance;
};

