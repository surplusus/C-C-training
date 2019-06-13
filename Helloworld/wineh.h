#pragma once
#include <iostream>
#include <string>
#include <valarray>
#include <utility>
using std::string;
class Wine
{
public:
	typedef std::valarray<int> ArrayInt;
	typedef std::pair<ArrayInt, ArrayInt> PairArray;
private:
	string name;
	PairArray info;
	int aSize;
public:
	
	Wine(string s, int n) : name(s), info(n,n), aSize(n) {};
	Wine(char * s, int n) : name(s), info(n, n), aSize(n) {};
	Wine(const char *s, int n, const int yr[], const int bot[]);
	void GetBottles();
	void Show();
	string Label() { return name; }
	int Sum() { return info.second.sum(); }
};

