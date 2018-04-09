#include "BangGiaPhiBocXep.h"

istream& operator >> (istream &is, BangGiaPhiBocXep &x)
{
	cout << "\nNhap vao so luong xe: ";
	is >> x.SoLuongXeBocXep;

	x.DanhSach = new PhiBocXep[x.SoLuongXeBocXep];
	for (int i = 0; i < x.SoLuongXeBocXep; i++)
	{
		is >> x.DanhSach[i];
	}
	return is;
}

ostream& operator <<(ostream &os, BangGiaPhiBocXep x)
{
	os << "-----------------------------------------------------------------------------\n";
	for (int i = 0; i < x.SoLuongXeBocXep; i++)
	{
		
		os << x.DanhSach[i] ;
	}
	os << "-----------------------------------------------------------------------------\n";
	return os;
}

BangGiaPhiBocXep::BangGiaPhiBocXep()
{
}


BangGiaPhiBocXep::~BangGiaPhiBocXep()
{
}
