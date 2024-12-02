#include <iostream>
using namespace std;

int main () {
	int n;
	cout << " Nhap so phan tu: "; cin >> n;
	cout << endl;
	
	int num[n];
	for(int i = 0; i < n; i++) {
		cout << " Nhap phan tu thu " << i+1 << ": ";
		cin >> num[i];
	}

	cout << endl;
	int index;
	int value;
	cout << " Nhap so can chen: "; cin >> value;
	cout << " Chen vao vi tri thu: "; cin >> index;
	n++;
	
	for (int i = n - 1; i >= index - 1; i--) {
		int j = i + 1;
		num[j] = num[i];
	}
	num[index - 1] = value;
	
	for(int i = 0; i < n; i++) {
		cout << num[i] << " ";
	}
}
