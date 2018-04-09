#pragma once
#include "day.h"
#include <string>
class PhiThueXe
{
private:
	string LoaiXeThue;
	int TuKm, DenKm;
	float GiaTien;
public:
	friend istream& operator >> (istream &, PhiThueXe &);
	friend ostream& operator << (ostream &, PhiThueXe );
	PhiThueXe();
	~PhiThueXe();
};

