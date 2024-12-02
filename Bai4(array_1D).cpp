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
	
	 
	cout << " So co it nhat hai phan tu lon hon la: ";
	for(int i = 0; i < n; i++) {
		int count = 0;
		for(int j = 0; j < n;j++ ) {
			if(num[j] > num[i]) {
				count++;
			}
		}
		if(count >= 2) {
			cout << num[i] << " ";
		}
		

	}
	
	/*
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
	*/
	
}
