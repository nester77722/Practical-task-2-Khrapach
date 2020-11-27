#include "Date.h"

void Date::Set(int d, int m, int y) {
	day = d;
	month = m;
	year = y;
}
void Date::Get(int& d, int& m, int& y) {
	d = day;
	m = month;
	y = year;
}
void Date::Next()
{
	day++;
}

bool Date::CompareDays(Date* other)
{
	if (this->day == other->day)
	{
		return true;
	}
	else
	{
		return false;
	}
}
