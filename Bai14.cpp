#include <iostream> 
#include <cmath>
using namespace std;

int main () {
	int a, b, c;
	double d;
	cout << " Cho phuong trinh: ax^2 + bx + c = 0. Tinh x." << endl;
	cout << " Nhap a: "; cin >> a;
	cout << " Nhap b: "; cin >> b;
	cout << " Nhap c: "; cin >> c;
	
	d = b*b - 4*a*c;
	if(d < 0) {
		cout << " Phuong trinh vo nghiem!";
	}
	else if(d==0) {
		cout << " Phuong trinh cho nghiem kep bang: " << -b/ (2*a);
	}	
	else if(d>0) {
		cout << endl;
		cout << " Phuong trinh cho 2 nghiem phan biet." << endl;
		cout << " Nghiem 1 la: " << (-b + sqrt(d))/(2* a) << endl;
		cout << " Nghiem 2 la: " << (-b - sqrt(d))/(2* a);
	}
}

