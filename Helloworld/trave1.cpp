#include <iostream>
using namespace std;
struct trave1_time
{
	int hours;
	int mins;
};
const int Mins_per_hr = 60;

trave1_time sum(trave1_time t1, trave1_time t2);
void show_time(trave1_time t);


int main()
{
	trave1_time day1 = { 5,45 };
	trave1_time day2 = { 4,55 };

	trave1_time trip = sum(day1, day2);
	cout << "이틀간 소요시간 : ";
	show_time(trip);

	trave1_time	day3 = { 4,32 };
	cout << "사흘간 소요시간 : ";
	show_time(sum(trip, day3));

	return 0;
}
trave1_time sum(trave1_time t1, trave1_time t2)
{
	trave1_time total;

	total.mins = (t1.mins + t2.mins) % Mins_per_hr;
	total.hours = t1.hours + t2.hours + (t1.mins + t2.mins) / Mins_per_hr;
	return total;
}
void show_time(trave1_time t)
{
	cout << t.hours << "시간 "
		<< t.mins << "분 \n";
}