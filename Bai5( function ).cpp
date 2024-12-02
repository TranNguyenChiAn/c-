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

void swap(int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;
	
}

void tangDan(int a[], int n) {
	for(int i = 0; i < n; i++) {      
		for(int j = i + 1; j < n; j++) {
			if(a[i] > a[j]) {
				swap(int a, int b);
			}
		
		}
		cout << a[i] << " ";
	}
	cout << endl;
}

void giamDan(int a[], int n) {
	for(int i = 0; i < n; i++) {      
		for(int j = i + 1; j < n; j++) {
			if(a[i] < a[j]) {
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		
		}
		cout << a[i] << " ";
	}
	cout << endl;
}

int main() {
	int num[100];
	int n = sizeof(num) / sizeof(int);
	
	cout << " Nhap so phan tu: "; cin >> n;
	nhapMang(num, n);
	
	cout << endl;
	cout << " In mang: ";
	inMang(num, n);

	cout << endl;
	cout << " In mang theo thu tu tang dan: ";
	tangDan(num, n);
	
	cout << endl;
	cout << " In mang theo thu tu giam dan: ";
	giamDan(num, n);
}


//tham so mac dinh

