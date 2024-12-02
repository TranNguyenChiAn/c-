#include <iostream>
using namespace std;
/*

void printNumbers(int n) { // n la tham so
	for(int i = 1; i <= n; i++) {
		cout << i << " ";
	}
	cout << endl;
}

void printChan(int n) {
	cout << " Danh sach cac so chan: ";
	for(int i = 1; i <= n;i++) {
		if(i%2 == 0) {
			cout << i << " ";
		}
 	}
 	cout << endl;
}

void increase(int n){
	n++;
	cout << " n trong ham increase: " << n;
	cout << endl;
}
*/

/*
int tinhTong( int n) {
	int sum = 0;
	for(int i = 1; i<= n; i++) {
		sum += i;
	}
	return sum;    //tra bien cho ham
}

bool testNumber(int n) {
	if(n%2 == 0) {
		return true;
	}
	return false;
	
}
*/

int tinhTong(int a, int b) {
	cout << " Tong = ";
	return a + b;
}

int tinhHieu(int a, int b) {
	cout << " Hieu = ";
	return a - b;
}

int tinhTich(int a, int b) {
	cout << " Tich = ";
	return a * b;
}

float tinhThuong(int a, int b) {
	cout << " Thuong = ";
	return a/b;
}



int main () {
	int a, b;
	cout << " Nhap so nguyen duong a: "; cin >> a;
	cout << " Nhap so nguyen duong b: "; cin >> b;
	cout << tinhTong(a, b) << endl;
	cout << tinhHieu(a, b) << endl;
	cout << tinhTich(a, b) << endl;
	cout << tinhThuong(a, b) << endl;
	
	
	return 0;
	/*
	int sum = tinhTong(n);
	if(testNumber(sum)) {
		cout << " Tong la so chan!";
	}else {
		cout << " Tong la so le!";
	}
	*/
	//printNumbers(n);  // n la doi so
	//printChan(n);
}


