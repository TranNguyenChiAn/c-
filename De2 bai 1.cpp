#include <iostream>
using namespace std;

int main() {
	int n;
	cout << " Nhap so phan tu cua mang: ";
	cin >> n;
	
	int a[n];
	for(int i = 0; i < n; i++) {
		cout << " Nhap phan tu thu " << i + 1 << ": ";
		cin >> a[i];	
	}
	
	cout << endl;
	cout << " In mang: ";
	for(int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	
	
	cout << endl;
	int max = 0;
	for(int i = 0; i < n; i++) {
		if(a[i] > max) {
			max = a[i];
		}
	}
	cout << " So lon nhat la: " << max;
	
	
	cout << endl;
	int min = a[0];	
	for(int i = 0; i < n; i++) {
		if(a[i] < min) {
			min = a[i];
		}	
	}
	cout << " So nho nhat la: " << min;
}

