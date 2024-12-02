#include <iostream> 
using namespace std;

int main () {
	int m, y;
	cout << " Nhap thang: ";
	cin >> m;
	cout << endl;
	switch(m){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
		cout << " Thang co 31 ngay." ;
		break;
		
		case 4:
		case 6:
		case 9:
		case 11:
		cout << " Thang co 30 ngay." ;
		break;
		
		case 2: 
		cout << " Nhap nam: "; cin >> y;
		if ( y%4 == 0 && y%100 != 0) {
			cout << " Thang co 29 ngay.";
		}
		else {
			cout << " Thang co 28 ngay.";
		}
		break;
		
	}
}
