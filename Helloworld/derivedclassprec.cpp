#include <iostream>
#include <string>
using namespace std;


class fruit
{
public:
	virtual void name() { cout << "����" << endl; }
	virtual ~fruit() { cout << "���ϳ�" << endl; }
};
class apple : public fruit
{
public:
	void name() { cout << "���" << endl; }
	~apple() { cout << "�����" << endl; }
};
class rottenapple : public apple
{
public:
	void name() { cout << "�������" << endl; }
	~rottenapple() { cout << "���������" << endl; }
};
class banana : public fruit
{
public:
	void name() { cout << "�ٳ���" << endl; }
	~banana() { cout << "�ٳ�����" << endl; }
};


int main()
{
	fruit  *pf1 = new apple;
	fruit  *pf2 = new banana;
	apple *pf3 = new rottenapple;
	pf1->name();
	
	pf2->name();
	pf3->name();
	delete pf1;
	delete pf2;
	delete pf3;
	return 0;
}