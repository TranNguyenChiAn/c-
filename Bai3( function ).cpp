#include <iostream>
using namespace std;

void nhapMang(int a[], int n) {
	for(int i = 0; i < n; i++) {
		cout << " Nhap phan tu thu " << i + 1 << ": "; cin >> a[i];
	}
}

void inMang(int a[], int n) {
	for(int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}

int main() {
	int num[10];
	int n = sizeof(num) / sizeof(int);
	cout << " Nhap so phan tu: "; cin >> n;
	nhapMang(num, n);
	cout << endl;
	cout << " In mang: ";
	inMang(num, n);
}

