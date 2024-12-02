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

int timMax(int a[], int n) {
	int max = 0;
	for(int i = 0; i < n; i++) {
		if(max < a[i]) 
		{
			max = a[i];
		}
	}
	return max;
	
}

int timMin(int a[], int n) {
		int min = a[0];
	for(int i = 0; i < n; i++) {

		if(min > a[i]) 
		{
			min = a[i];
		}
	}
	return min;
	
}

int main() {
	int num[10];
	int n = sizeof(num) / sizeof(int);
	cout << " Nhap so phan tu: "; cin >> n;
	nhapMang(num, n);
	cout << endl;
	cout << " In mang: ";
	inMang(num, n);
	
	cout << endl;
	cout << " So lon nhat la: " << timMax(num, n) << endl;
	cout << " So nho nhat la: " << timMin(num, n) << endl;
	
	
}

