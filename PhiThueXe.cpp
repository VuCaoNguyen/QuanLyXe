#include "PhiThueXe.h"
istream& operator >> (istream &is, PhiThueXe &x)
{
	is.ignore();
	cout << "\nNhap vao loai xe: ";
	getline(is, x.LoaiXeThue);

	cout << "\nTu kilometers: ";
	is >> x.TuKm;

	cout <<  "\nDen Kilometers: ";
	is >> x.DenKm;

	cout << "\nNhap vao Gia tien phai tra: ";
	is >> x.GiaTien;
	return is;
}
ostream& operator <<(ostream &os, PhiThueXe x)
{
	os << "\nLoai Xe: " << x.LoaiXeThue;
	os << "\nTu  " << x.TuKm << "km den " << x.DenKm << "km ";
	os << "\nGia tien: " << x.GiaTien << " VND";
	return os;
}

PhiThueXe::PhiThueXe()
{
}


PhiThueXe::~PhiThueXe()
{
}
