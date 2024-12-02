#include <iostream>
#include <cmath>
using namespace std;

 int main () {
 	int diem;
 	cout << "\t Nhap diem: ";
 	cin >> diem;
 	
 	if(80<=diem && diem<= 100) {
 		cout << "\t Diem tuong ung la: A " << endl;
	}
	else if(60<=diem && diem< 80) {
	 	cout << "\t Diem tuong ung la: B" << endl;
	}
	else if(50<=diem && diem<60) {
	 	cout << "\t Diem tuong ung la: C" << endl;
	}
	else if(45<= diem && diem <50) {
	 	cout << "\t Diem tuong ung la: D" << endl;
	}
	else if(25<= diem && diem <45) {
	 	cout << "\t Diem tuong ung la: E" << endl;
	}
	else if(0<=diem && diem <25) {
	 	cout << "\t Diem tuong ung la: F" << endl;
	}
	else {
	 	cout << "\t Khong hop le. Vui long nhap lai!";
	 }
 }
