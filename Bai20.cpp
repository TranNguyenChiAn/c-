#include <iostream> 
using namespace std;

int main () {
	float r;
	double Pi = 3.14;
	
	do {
		cout << " Nhap ban kinh: ";
		cin >> r;
		if(r<0) {
			cout << " Khong hop le. Nhap so duong!" << endl;
			continue;
		}
		cout << " Dien tich hinh tron la: " << Pi * r * r << endl;
	}while(r<0);
		return 0;
	}
		

