#include "brass.h"
#include <iostream>
using namespace std;

typedef ios_base::fmtflags format;
typedef streamsize precis;
format setFormat();
void restore(format f, precis p);

Brass::Brass(const string & s, long an, double bal)
{
	fullName = s;
	accNum = an;
	balance = bal;
}

void Brass::Deposit(double amt)
{
	if (amt < 0)
		cout << "마이너스 입금은 허용되지 않습니다.\n"
		<< "임금이 취소되었습니다. \n";
	else
		balance += amt;
}

void Brass::Withdraw(double amt)
{
	format initialState = setFormat();
	precis prec = cout.precision(2);

	if (amt < 0)
		cout << "마이너스 인출은 허용되지 않습니다. \n"
		<< "인출이 취소되었습니다. \n";
	else if (amt <= balance)
		balance -= amt;
	else
		cout << "인출을 요구한 금액 $" << amt
		<< "가 현재 잔액을 초과합니다. \n"
		<< "인출이 취소되었습니다. \n";
	restore(initialState, prec);
}

double Brass::Balance() const
{
	return balance;
}

void Brass::ViewAcct() const
{
	format initialState = setFormat();
	precis prec = cout.precision(2);
	cout << "고객 이름 : " << fullName << endl;
	cout << "계좌 번호 : " << accNum << endl;
	cout << "현재 잔액 : " << balance << endl;
	restore(initialState, prec);
}

BrassPlus::BrassPlus(const string & s, long an, double bal, double ml, double r)
{
	maxLoan = ml;
	owesBank = 0.0;
	rate = r;
}

BrassPlus::BrassPlus(const Brass & ba, double ml, double r)
{
	format initialState = setFormat();
	precis prec = cout.precision(2);
	Brass::ViewAcct();
	cout << "당좌 대월 한도액 : $" << maxLoan << endl;
	cout << "상환할 원리금 : $" << owesBank << endl;
	cout.precision(3);
	cout << "당좌 대월 이자율 : $" << 100 * rate << "%\n";
	restore(initialState, prec);
}

void BrassPlus::Withdraw(double amt)
{
	format initialState = setFormat();
	precis prec = cout.precision(2);

	double bal = Balance();
	if (amt <= bal)
		Brass::Withdraw(amt);
	else if (amt <= bal + maxLoan - owesBank)
	{
		double advance = amt - bal;
		owesBank += advance * (1.0 + rate);
		cout << "당좌 대월 금액 : $" << advance << endl;
		cout << "당좌 대월 이자 : $" << advance * rate << endl;
		Deposit(advance);
		Brass::Withdraw(amt);
	}
	else
		cout << "당좌 대월 한도가 초과되어 거래가 취소되었습니다. \n";
	restore(initialState, prec);
}

void BrassPlus::ViewAcct() const
{
	format initialState = setFormat();
	precis prec = cout.precision(2);
	Brass::ViewAcct();
	cout << "당좌 대월 한도액 : $" << maxLoan << endl;
	cout << "상환할 원리금 : $" << owesBank << endl;
	cout.precision(3);
	cout << "당좌 대월 이자율 : " << 100 * rate << "%\n";
	restore(initialState, prec);
}

format setFormat()
{
	return cout.setf(ios_base::fixed, ios_base::floatfield);
}

void restore(format f, precis p)
{
	cout.setf(f, ios_base::floatfield);
	cout.precision(p);
}
