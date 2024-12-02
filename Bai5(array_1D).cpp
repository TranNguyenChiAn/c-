#include <iostream>
using namespace std;

int main () {
	int n;
	int max_count = 0;
	cout << " Nhap so phan tu: "; cin >> n;
	cout << endl;
	
	int num[n];
	for(int i = 0; i < n; i++) {
		cout << " Nhap phan tu thu " << i+1 << ": ";
		cin >> num[i];
	}
	cout << endl;
	
	for(int i = 0; i < n; i++) {
		int count = 0;
		for(int j = i + 1; j < n; j++) {
			if(num[i] = num[j]) {
				count++;
			}
		}
		
		if(count > max_count) {
			max_count = count;
	 	}
	}
	
	for(int i = 0; i < n; i++) {
		int count = 0;
		for(int j = i + 1; j < n; j++) {
			if(num[i] = num[j]) {
				count++;
			}
		}
		
		if(count == max_count) {
			cout << " So xuat hien nhieu nhat la: " << num[i] << endl;
			cout << " So lan xuat hien: " << max_count << endl;
	 	}
	}

}
