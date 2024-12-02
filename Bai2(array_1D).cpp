#include <iostream>
using namespace std;

int main () {
	int n;
	cout << " Nhap so phan tu: "; cin >> n;
		if(n < 3) {
			cout << " Khong ton tai du du kieu!";
		}
	cout << endl;
	
	int num[n];
	for(int i = 0; i < n; i++) {
		cout << " Nhap phan tu thu " << i+1 << ": ";
		cin >> num[i];
	}

	cout << endl;
	for(int i = 0; i < n-1; i++) {      
		for(int j = i + 1; j < n; j++) {
			if(num[i] < num[j]) {
				int temp = num[i];
				num[i] = num[j];
				num[j] = temp;
			}
		}
	}
	cout << endl;
	cout << " So lon thu hai la: " << endl;
	for(int i = 0; i < n; i++) {
		cout << num[1];
		break;
	}
	/*
	int n;
	int max_1, max_2;
	max_1 = max_2  = INT_MIN;
	cout << " Nhap so phan tu: "; cin >> n;
		if(n < 3) {
			cout << " Khong ton tai du du kieu!";
		}
	cout << endl;
	
	int num[n];
	for(int i = 0; i < n; i++) {
		cout << " Nhap phan tu thu " << i+1 << ": ";
		cin >> num[i];
	}
	
	for(int i = 0; i < n; i++) {
		if(num[i] > max_1) {
			max_2 = max_1;
			max_1 = num[i];
		}else if (num[i] > max_2) {
			max_2 = num[i];
		}
		
	}
	
	if(max_2 != INT_MIN) {
		cout << " Max 2 = " << max_2;
	}
	*/
	
	

	
	
}
