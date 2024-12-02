#include <iostream>
using namespace std;

int main() {
	float luongCoBan, TongLuong, da, hra;
	cout << "Nhap luong co ban:"; cin >> luongCoBan;
	if (luongCoBan < 1500) {
		hra = luongCoBan * 10 / 100;
		da = luongCoBan * 90 / 100;
	} else {
		hra = 500;
		da = luongCoBan * 98 / 100;
	}
		
	TongLuong = luongCoBan + hra + da;
	cout << "Tong luong = " << TongLuong;
}
