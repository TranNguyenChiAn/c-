#include <iostream> 
using namespace std;

int main () {
	int a, b;
	cout << " Cho phuong trinh: ax + b = 0. Tinh x" << endl;
	do {
		cout << " Nhap a: "; cin >> a;
		cout << " Nhap b: "; cin >> b;
			if(a==0) {
			cout << " Phuong trinh loi. "<< endl;
			continue;
			}
		cout << " X bang: " << -b/a << endl;;	
	} while(a == 0);
	
	return 0;
}
