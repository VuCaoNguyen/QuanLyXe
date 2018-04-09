#pragma once
#include <iostream>
using namespace std;
class day
{
private:
	int Date, Month, Year;
public:
	friend istream& operator >> (istream &, day &);
	friend ostream&operator <<(ostream &, day);
	void Xuat();
	day();
	~day();
};

