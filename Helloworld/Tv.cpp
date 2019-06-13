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
		cout << "mode = " << (mode == Antenna ? "지상파" : "케이블") << endl;
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
	cout << "42\" TV의 초기 설정값 : \n";
	s42.settings();
	s42.onoff();
	s42.chanup();
	cout << "\n42\" TV의 변경된 설정값: \n";
	s42.settings();

	Remote grey;

	grey.set_chan(s42, 10);
	grey.volup(s42);
	grey.volup(s42);
	cout << "\n리모콘 사용 후 42\" TV의 설정값:\n";
	s42.settings();

	Tv s58(Tv::On);
	s58.set_mode();
	grey.set_chan(s58, 28);
	cout << "\n58\" TV의 설정값:\n";
	s58.settings();

	cout << endl;
	cout << "리모콘 작동" << endl;
	grey.show_tell_mode();
	
	cout << "TV 전원 켬" << endl;
	Tv s11;
	cout << "하이~리모콘" << endl;
	s11.chan_tell_mode(grey);
	grey.show_tell_mode();
	return 0;
}