#include <iostream>
#include <cmath>
using namespace std;

int main () {
	int n, end;
	float S =0;
	cout << endl;
	cout << "\t Cho bieu thuc: S = 1 + 1/2^2 + 1/ 3^3 ... + 1/n^n. Tinh S." << endl;
	cout << "\t Nhap n: "; cin >> end;
	
	for (int n= 1; n <= end; n++) {
		S = S + 1/pow(n, n);
		}
	cout << "\t"<< " S = " << S << endl;
	return 0;
}

