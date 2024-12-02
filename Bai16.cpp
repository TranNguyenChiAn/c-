#include <iostream> 
using namespace std;

int main () {
	int y;
	cout << " Nhap nam: "; cin >> y;
		if ( y%4 == 0 && y%100 != 0) {
			cout << " Nam nhuan.";
		}
		else {
			cout << " Khong phai nam nhuan.";
		}
}
