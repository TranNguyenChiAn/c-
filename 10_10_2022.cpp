#include <iostream>
#include <cmath>
using namespace std;

int main () {
	int a, b, c;
	double d;
	
	cout << " Cho phuong trinh: a.x^2 + b.x + c = 0" << endl;
	cout << " Nhap a: ";
	cin >> a;
	cout <<" Nhap b: ";
	cin >> b;
	cout <<" Nhap c: " ;
	cin >> c;
	cout << endl;
	
	d = b * b - 4 * a * c;
	
	
	if( a == 0 && b == 0 ){
		cout << " Phuong trinh loi" << endl;
	}
	else if(!a) {
		if(!b) {
			cout << endl;
			cout << " Phuong trinh loi!";
		}
	}
	else if( d < 0) {
		cout << " Phuong trinh vo nghiem!" << endl;
	} 
	else if (d == 0) {
		cout << " Phuong trinh cho nghiem kep bang: " << -b / (2 * a) << endl;
	}
	else if ( d > 0) {
		cout << " Phuong trinh cho hai nghiem: " << endl;
		cout << " Nghiem 1 bang: " << (-b + sqrt(d))/(2 * a) << endl;
		cout << " Nghiem 2 bang: " << (-b - sqrt(d))/(2 * a) << endl;	
	}
  	
	return 0;
}

/* 
variable + bieu_thuc ? true : false; //toan tu 3 ngoi
-SWITCH-CASE : 
   switch(bieu_thuc)
 {
	 case  dieu_kien_1: code_thu_thi;
	 break;
	 case  dieu_kien_2: code_thu_thi;
	 break;
	 default: code_thuc_thi;
	 case dieu_kien_1:
	 case dieu_kien_2:
	 case dieu_kien_3: code thu thi
 }
 
 Viet chyuong trinh nhap vao 1 so tu  den 12 sau do hien thi ra tong so ngay trong thang do. 
 Luu y can phai nhap them nam de biet nam nhuan ha
 cho = (so chan - 2 * so con ) /2
 ga  = so con (so chn -2 * so con )/2 
 
 VIet chuong trinh giai pt bac 2 
 
 Viet chuong trinh 
*/
