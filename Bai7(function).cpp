#include <iostream>
using namespace std;

int giaiThua(int &n) {
	int sum = 1;
	for(int i = 1; i < n; i++ ) {
		sum *= (n - i);
	}
	cout << n*sum;
}



int main() {
	int n;
	cout << " Nhap so : "; cin >> n;
	cout << endl;
	
	cout << " Giai thua la: ";
	giaiThua(n);
	
}

