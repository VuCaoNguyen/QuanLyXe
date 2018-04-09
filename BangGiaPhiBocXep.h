#pragma once
#include "PhiBocXep.h"
class BangGiaPhiBocXep
{
private:
	int SoLuongXeBocXep;
	PhiBocXep *DanhSach;
public:
	friend istream& operator >> (istream &, BangGiaPhiBocXep &);
	friend ostream& operator << (ostream &, BangGiaPhiBocXep);
	BangGiaPhiBocXep();
	~BangGiaPhiBocXep();
};

