#pragma once
#include "PhiThueXe.h"
class BangGiaThueXe
{private:
	int SoLuongXe;
	PhiThueXe *DanhSach;
public:
	friend istream& operator >> (istream &, BangGiaThueXe &);
	friend ostream& operator << (ostream &, BangGiaThueXe);
	BangGiaThueXe();
	~BangGiaThueXe();
};

