#include "PhiBocXep.h"

istream& operator >> (istream &is, PhiBocXep &x)
{
	is.ignore();
	cout << "\nNhap vao loai xe boc  xep: ";
	getline(is, x.LoaiXeBocXep);

	cout << "\nNhap vao gia tien boc Xep: ";
	is >> x.GiaTienBocXep;
	return is;
}
ostream& operator <<(ostream &os, PhiBocXep x)
{
	os << "\nGia tien cua loai xe " << x.LoaiXeBocXep << " la: " << x.GiaTienBocXep << "VND\n";
	return os;
}


PhiBocXep::PhiBocXep()
{
}


PhiBocXep::~PhiBocXep()
{
}
