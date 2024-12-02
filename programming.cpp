#include <iostream>
using namespace std;

int main () {
	//Tinh tong cac so chan duoc nhap tu ban phim.
	int n;
	 cout << "Nhap so phan tu: ";
	 cin >> n;
	 
	 int num[n];
	for(int i = 0; i < n; i++){
		cout << "Nhap so thu " << i + 1 << ": ";
		cin >> num[i];
	}
	
	int sum = 0;
	for(int i = 0; i < n; i++){
		if(num[i] % 2 == 0) {
			sum += num[i];
		}
	}
	cout << "Tong cac so chan la: " << sum;
}
