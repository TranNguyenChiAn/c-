#include <iostream>
using namespace std;

int main () {
	
	int max_1, max_2, max_3;
	max_1 = max_2 = max_3 = INT_MIN;
	int n;
	cout << " Nhap so phan tu: "; cin >> n;
	
	if(n < 3) {
		cout << " Khong ton tai du du kieu!";
	}
	
	int num[n];
	for(int i = 0; i < n; i++) {
		cout << " Nhap phan tu thu " << i+1 << ": ";
		cin >> num[i];
	}
	
	for(int i = 0; i < n; i++) {
		if(num[i] > max_1) {
			max_3 = max_2;
			max_2 = max_1;
			max_1 = num[i];
		}else if (num[i] > max_2) {
			max_3 = max_2;
			max_2 = num[i];
		}
		else if(num[i] > max_3) {
			max_3 = num[i];
		}
	}
	cout << " Max 1 = " << max_1 << endl;
	cout << " Max 2 = " << max_2 << endl;
	cout << " Max 3 = " << max_3 << endl;

	
	
	
	/*
	int n;
	cout << " Nhap so phan tu: "; cin >> n;
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
	for(int i = 0; i < n; i++) {
		cout << " Max 1 = " << num[0] << endl;
		cout << " Max 2 = " << num[1] << endl;
		cout << " Max 3 = " << num[2] << endl;
		break;
	}
	*/
	
}
