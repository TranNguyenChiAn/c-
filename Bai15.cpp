#include <iostream> 
#include <cmath>
#include <cstdlib>
using namespace std;

int main () {
	int Von, DoanhThu, KetQua;
	cout << " Nhap von: "; cin >> Von;
	cout << " Nhap doanh thu: "; cin >> DoanhThu;
	KetQua = DoanhThu - Von;
		if(KetQua < 0) {
			cout << " Lo "<< "!" << endl;
		}
		else if ( KetQua==0) {
			cout << " Hoi von!";
		}
		else {
			cout << " Lai " << KetQua;
		}
	
}
