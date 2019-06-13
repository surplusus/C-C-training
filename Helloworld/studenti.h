// studentc �� ���� ����� �Ѵ�
// Ŭ���� �ɹ��� Ŭ������ ���� �ʰ�
// private���� ��� �޾Ƽ� �״�� ����� ���� �ִ�. 
#pragma once
#include <iostream>
#include <valarray>
#include <string>
using std::string;

class Student : private string, private std::valarray<double>
{
private:
	typedef valarray<double> ArrayDb;
	// scores ����� ���� �ż���
	std::ostream & arr_out(std::ostream & os) const;
public:
	Student() : string("Null Student"), ArrayDb() {}
	explicit Student(const std::string & s) : string(s), ArrayDb() {}
	explicit Student(int n) : string("Nully"), ArrayDb(n) {}
	Student(const std::string & s, int n) : string(s), ArrayDb(n) {}
	Student(const char * str, const double * pd, int n) : string(str), ArrayDb(pd,n) {}
	~Student() {}
	double Average() const;
	const std::string & Name() const;
	double & operator[](int i);
	double operator[](int i) const;

	friend std::istream & operator>>(std::istream & is, Student & stu);
	friend std::istream & getline(std::istream & is, Student & stu);
	friend std::ostream & operator<<(std::ostream & os, Student & stu);
};

