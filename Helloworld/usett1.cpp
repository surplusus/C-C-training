#include"tabtenn1.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	TableTennisPlayer player1("Tara", "Boomdea", false);
	RatedPlayer rplayer1(1140, "Mallory", "Duck", true);
	rplayer1.Name();
	if (rplayer1.HasTable())
		cout << " : Ź���밡 �ִ�. \n";
	else
		cout << " : Ź���밡 ����. \n";
	player1.Name();
	if (player1.HasTable())
		cout << " : Ź���밡 �ִ�. \n";
	else
		cout << " : Ź���밡 ����. \n";
	cout << "�̸� : ";
	rplayer1.Name();
	cout << "; ��ŷ: " << rplayer1.Rating() << endl;
	RatedPlayer rplayer2(1212, player1);
	cout << "�̸�: ";
	rplayer2.Name();
	cout << "; ��ŷ: " << rplayer2.Rating() << endl;
	return 0;
}