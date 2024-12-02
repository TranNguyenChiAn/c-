#include <iostream>
#include <cmath>
using namespace std;

int main () {
	int n;
	int S=1;
	cout << " Nhap n: ";
	cin >> n;
	cout << " Giai thua cua " << n << " la: ";
	
	for(; n >= 1; n--) {
		S = S * n;
		
	}
	cout << S << endl;
}

