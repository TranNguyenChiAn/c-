#include <iostream>
using namespace std;

int main () {
	int n;
	cout << " Nhap so phan tu: "; cin >> n;
	cout << endl;
	
	int num[n];
	for(int i = 0; i < n; i++) {
		cout << " Nhap phan tu thu " << i + 1 << ": ";
		cin >> num[i];
	}
	
	cout << endl;
	int index;
	cout << " Xoa phan tu thu : "; cin >> index;
	cout << " In mang: ";

	for (int i = index - 1; i <= n; i++) {
		int j = i + 1;
		num[i] = num[j];
	}
	
	n--;
	
	for(int i = 0; i < n; i++) {
		cout << num[i] << " ";
	}
	
}
