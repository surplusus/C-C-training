#include <iostream>
#include "Tv.h"

bool Tv::volup()
{
	if (volume < MaxVal)
	{
		volume++;
		return true;
	}
	else
		return false;
	return false;
}

bool Tv::voldown()
{
	if (volume > MinVal)
	{
		volume--;
		return true;
	}
	else
		return false;
}

void Tv::chanup()
{
	if (channel < maxchannel)
		channel++;
	else
		channel--;
}

void Tv::chandown()
{
	if (channel > 1)
		channel--;
	else
		channel = maxchannel;
}

void Tv::settings() const
{
	using std::cout;
	using std::endl;
	cout << "TV = " << (state == Off ? "OFF" : "ON") << endl;
	if (state == On)
	{
		cout << "volume = " << volume << endl;
		cout << "channel = " << channel << endl;
		cout << "mode = " << (mode == Antenna ? "������" : "���̺�") << endl;
		cout << "input = " << (input == TV ? "TV" : "DVD") << endl;
	}
}

void Tv::chan_tell_mode(Remote & r)
{
	++r.tell_mode %= 2;
}


int main()
{
	using namespace std;
	Tv s42;
	cout << "42\" TV�� �ʱ� ������ : \n";
	s42.settings();
	s42.onoff();
	s42.chanup();
	cout << "\n42\" TV�� ����� ������: \n";
	s42.settings();

	Remote grey;

	grey.set_chan(s42, 10);
	grey.volup(s42);
	grey.volup(s42);
	cout << "\n������ ��� �� 42\" TV�� ������:\n";
	s42.settings();

	Tv s58(Tv::On);
	s58.set_mode();
	grey.set_chan(s58, 28);
	cout << "\n58\" TV�� ������:\n";
	s58.settings();

	cout << endl;
	cout << "������ �۵�" << endl;
	grey.show_tell_mode();
	
	cout << "TV ���� ��" << endl;
	Tv s11;
	cout << "����~������" << endl;
	s11.chan_tell_mode(grey);
	grey.show_tell_mode();
	return 0;
}