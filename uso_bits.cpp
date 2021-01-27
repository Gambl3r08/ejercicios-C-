#include <iostream>

using namespace std;

struct Date
{
	unsigned int Year: 13;
	unsigned int Month: 4;
	unsigned int Day: 5;
};


int main(int argc, char const *argv[])
{
	
	Date d;
	d.Year = 2019;
	d.Month = 8;
	d.Day = 22;

	cout<<"Year: " << d.Year << endl;
	cout<<"Month: " << d.Month <<endl;
	cout<<"Day: " << d.Day <<endl;

	return 0;
}