#include <iostream>
#include <cmath>
using namespace std;

 int main () {
 	int so_luong;
 	cout << "\t Nhap so luong: ";
 	cin >> so_luong;
 	cout << endl;
 	
 	if(so_luong>1000) {
 		cout << "\t So luong hang hoa: " << so_luong <<endl;
 		cout << "\t Giam gia 10\%" << endl;
 		cout << "\t Tong chi phi la: " << 100 * so_luong - 100 * so_luong * 0.1  << endl;
	}
	else if( 1<= so_luong && so_luong<=1000) {
		cout << "\t So luong hang hoa: " << so_luong <<endl;
		cout << "\t Don gia: 100" << endl;
	 	cout << "\t Tong chi phi la: " << 100 * so_luong << endl;
	}
	else {
		cout << "\t Khong hop le. Nhap so nguyen lon hon hoac bang 1" << endl;
	}

 }
