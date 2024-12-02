#include <iostream>
using namespace std;

int main() {
	cout << "  Bang nhan rut gon la: " << endl;
	for(int i = 1; i <=10; i++) {
		cout << "\t" << i;
		for(int j = 2; j <=10;j++ ) {
			cout << "\t" << i * j; 
		}
		cout << endl;
	}
	return 0;
}

/*
	VONG LAP TRONG C++
	- while(bieu_thuc) {
		code thuc thi;
		dieu kien tac dong;
		
	- do ... while
			do {
				code thuc thi;
				dieu kien;
			}
			while(bieu thuc);
	
	- for: for, for-each
		for(khoi tao; bieu thuc; dieu kien) {
			code thuc thi;
		}
	
 */
 
 /*
 	CAU TRUC DIEU KHIEN VA RE NHANH
 	 - break: ket thu lan lap do
 	 - continue: bo qua lan lap do
 	
 	
 	IN RA BANG CUU CHUONG RUT GON
  */

