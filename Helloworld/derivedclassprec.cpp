#include <iostream>
#include <string>
using namespace std;


class fruit
{
public:
	virtual void name() { cout << "과일" << endl; }
	virtual ~fruit() { cout << "과일끝" << endl; }
};
class apple : public fruit
{
public:
	void name() { cout << "사과" << endl; }
	~apple() { cout << "사과끝" << endl; }
};
class rottenapple : public apple
{
public:
	void name() { cout << "썩은사과" << endl; }
	~rottenapple() { cout << "썩은사과끝" << endl; }
};
class banana : public fruit
{
public:
	void name() { cout << "바나나" << endl; }
	~banana() { cout << "바나나끝" << endl; }
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