#include "day.h"

istream& operator >>(istream &is, day &x)
{
	cout << "\nNhap vao Ngay: ";
	is >> x.Date;
	
	cout << "\nNhap vao thang: ";
	is >> x.Month;

	cout << "/nNhap vao nam: ";
	is >> x.Year;
	return is;
}
ostream& operator <<(ostream &os, day x)
{
	os << "/nNgay " << x.Date << " thang " << x.Month << " nam " <<  x.Year;
	return os;
}

day::day()
{
}


day::~day()
{
}
