#include "Move.h"
#include <iostream>

Move::Move(double a, double b)
{
	x = a;
	y = b;
}

void Move::showmove() const
{
	using namespace std;
	cout << "XÀÇ °ª " << this->x << " / " << "YÀÇ °ª " << this->y << endl;
}

Move Move::add(const Move & m) const
{

	return Move(m.x + this->x, m.y + this->y);
}

void Move::reset(double a, double b)
{
	this->x = a;
	this->y = b;
	
}



void main()
{
	using namespace std;
	Move *cal = new Move(3, 6);
	Move m1(1, 1);
	Move m2;
	cout << "Move m1 °´Ã¼:\n";
	m1.showmove();
	cout << "Move m2 °´Ã¼:\n";
	m2.showmove();
	cout << "Move m2 °´Ã¼ (2, 3)·Î Àç¼³Á¤:\n";
	m2.reset(2, 3);
	m2.showmove();
	cout << "Move m1 °´Ã¼¿¡ Move m2 °´Ã¼¸¦ ´õÇØ¼­ »õ·Î¿î Move °´Ã¼ m3¸¦ »ý¼º:\n";
	Move m3 = m1.add(m2);
	m3.showmove();
}