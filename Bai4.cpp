#include <iostream>
#include <cmath>
using namespace std;

 int main () {
 	int muc_luong, nam_cong_tac;
 	cout << "\t Nhap so nam cong tac: ";
 	cin >> nam_cong_tac;
 	cout << "\t Nhap muc luong: ";
 	cin >> muc_luong;
 	cout << endl;
 	
 	if(nam_cong_tac > 5) {
 		cout << "\t Tien thuong: " << muc_luong + (muc_luong * 0.05)  << endl;
	}
	else if(nam_cong_tac < 0) {
		cout << "\t Khong hop le. Vui long nhap lai!" << endl;
	}
	else { 
		cout << "\t Tien thuong: 0" << endl;
	}

 }
