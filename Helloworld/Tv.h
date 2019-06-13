#pragma once

class Tv
{
public:
	friend class Remote;
	enum {Off, On};
	enum {MinVal, MaxVal = 20};
	enum {Antenna, Cable};	
	enum { TV, DVD };

	Tv(int s = Off, int mc = 125) : state(s), volume(5), maxchannel(mc), channel(2), mode(Cable), input(TV) {}
	void onoff() { state = (state == On) ? Off : On; }
	bool ison() const { return state == On; }
	bool volup();
	bool voldown();
	void chanup();
	void chandown();
	void set_mode() { mode = (mode == Antenna) ? Cable : Antenna; }
	void set_input() { input = (input == TV) ? DVD : TV; }
	void settings() const;
	void chan_tell_mode(Remote & r);
private:
	int state;
	int volume;
	int maxchannel;
	int channel;
	int mode;
	int input;
};

class Remote
{
private:
	enum { NORMAL, DIALLOGUE };
	int mode;
	int tell_mode;
public:
	friend class Tv;
	
	Remote(int m1 = Tv::TV, int m2 = NORMAL) : mode(m1), tell_mode(m2) {}
	bool volup(Tv & t) { return t.volup(); }
	bool voldown(Tv & t) { return t.voldown(); }
	bool onoff(Tv & t) { t.onoff(); }
	void chanup(Tv & t) { t.chanup(); }
	void chandown(Tv & t) { t.chandown(); }
	void set_chan(Tv & t,int c ) { t.channel = c; }
	void set_mode(Tv &t) { t.set_mode(); }
	void set_input(Tv & t) { t.set_input(); }
	void chan_tell_mode(Remote & r) { ++r.tell_mode %= 2; }
	void show_tell_mode() { std::cout << (tell_mode == NORMAL ? "�Ϲݸ��" : "��ȭ���")  << std::endl; }
};
