#pragma once

#include <iostream>

class Date
{
public:
	void Set(int, int, int);

	void Get(int&, int&, int&);

	bool CompareDays(Date* other);

	void Next();
private:
	int day, month, year;

};

