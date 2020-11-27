#include <iostream>
#include "Date.h"

using namespace std;

int main()
{
	Date d1, d2;

	int d, m, y;

	d1.Set(30, 5, 2020);

	d1.Get(d, m, y);

	cout << "Date1: day=" << d << " month=" << m << " year=" << y << endl;

	d2.Set(30, 10, 2020);

	d2.Get(d, m, y);

	cout << "Date1: day=" << d << " month=" << m << " year=" << y << endl;

	if (d1.CompareDays(&d2))
	{
		cout << "Date1 day = Date2 day" << endl;
	}
	else
	{
		cout << "Date1 day != Date2 day" << endl;
	}
	
	return 0;

}