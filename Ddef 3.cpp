#include <iostream>
using namespace std;
int main() {
	cout << " Nhap so n: ";
	int n;
	int sum = 0;
	cin >> n;
	cout << " Tong cac so le tu 1 den n la: ";
	
	for (int i = 1; i <= n; i++) {
		if(i%2 != 0) {
			sum +=i;
		}
	}
	cout << sum;
}
