#pragma once
#include <iostream>
#include <string>
using std::string;

class AcctABC
{
private:
	string fullName;
	long acctNum;
	double balance;
protected:
	struct Formatting
	{
		std::ios_base::fmtflags flag;
		std::streamsize pr;
	};
	const string & FullName() const { return fullName; }
	long AcctNum() const { return acctNum; }
	Formatting SetFormat() const;
	void Restore(Formatting & f) const;
public:
	AcctABC(const string & s = "Nullbody", long an = -1, double bal = 0.0);
	void Deposit(double amt);
	virtual void Withdraw(double amt) = 0;	// 순수가상함수
	virtual void ViewAcct() const = 0;		// 순수가상함수
	double Balance() const { return balance; }
	virtual ~AcctABC() {}
};

class Brass : public AcctABC
{
public:
	Brass(const string & s = "Nullbody", long an = -1, double bal = 0.0) : AcctABC(s,an,bal){}
	virtual void Withdraw(double amt);
	virtual void ViewAcct() const;
	virtual ~Brass() {}
};

class BrassPluss : public AcctABC
{
private:
	double maxLoan;
	double rate;
	double owesBank;
public:
	BrassPluss(const string & s = "Nullbody", long an = -1, double bal = 0.0, 
		double ml = 500, double r = 0.10);
	BrassPluss(const Brass & ba, double ml = 500, double r = 0.1);
	virtual void ViewAcct() const;
	virtual void Withdraw(double amt);
	void ResetMax(double m) { maxLoan = m; };
	void ResetRate(double r) { rate = r; };
	void ResetOwes() { owesBank = 0; }
private:

};