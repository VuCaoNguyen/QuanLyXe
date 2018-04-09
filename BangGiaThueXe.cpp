#include "BangGiaThueXe.h"

istream& operator >> (istream &is, BangGiaThueXe &x)
{
	cout << "\nNhap vao so luong xe: ";
	is >> x.SoLuongXe;

	x.DanhSach = new PhiThueXe[x.SoLuongXe];
	for (int i = 0; i < x.SoLuongXe; i++)
	{
		is >> x.DanhSach[i];
	}
	return is;
}

ostream& operator <<(ostream &os, BangGiaThueXe x)
{
	for (int i = 0; i < x.SoLuongXe; i++)
	{
		os << x.DanhSach[i] << endl;
	}
	return os;
}
BangGiaThueXe::BangGiaThueXe()
{
}


BangGiaThueXe::~BangGiaThueXe()
{
}
