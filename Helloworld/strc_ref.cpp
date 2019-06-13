#include <iostream>
#include <string>
using namespace std;

typedef struct free_throws
{
	string name;
	int made;
	int attempts;
	float percent;
} FT;

void display(const FT &ft)
{
	cout << "Name: " << ft.name << endl;
	cout << "Made: " << ft.made << '\t';
	cout << "Attempts: " << ft.attempts << '\t';
	cout << "Percent: " << ft.percent << endl;
}
void set_pc(FT &ft)
{
	if (ft.attempts != 0)
		ft.percent = 100.0f *float(ft.made) / float(ft.attempts);
	else
		ft.percent = 0;
}
FT &accumulate(FT &target, const FT &source)
{
	target.attempts += source.attempts;
	target.made += source.made;
	set_pc(target);
	return target;
}
int main()
{
	FT one = { "Ifelsa Brance",13,14 };
	FT two = { "Andor Knott",10,16 };
	FT three = { "Minnie Max",7,9 };
	FT four = { "Whily Looper",5,9 };
	FT five = { "Long Long",6,14 };
	FT team = { "Throwgoods ",0,0 };

	FT dup;
	set_pc(one);
	display(one);
	accumulate(team, one);
	display(team);

	display(accumulate(team, two));
	accumulate(accumulate(team, three), four);
	display(team);

	dup = accumulate(team, five);
	cout << "Print team : " << endl;
	display(team);
	cout << "After assignment, Print dup:" << endl;
	display(dup);
	set_pc(four);
	accumulate(dup, five) = four;
	cout << "caution!, Print dup" << endl;
	display(dup);

	return 0;
}