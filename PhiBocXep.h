#pragma once
#pragma

#include "PhiThueXe.h"
class PhiBocXep

{
private:
	string LoaiXeBocXep;
	float GiaTienBocXep;
public:
	friend istream& operator >> (istream &, PhiBocXep &);
	friend ostream& operator << (ostream &, PhiBocXep);
	PhiBocXep();
	~PhiBocXep();
};

