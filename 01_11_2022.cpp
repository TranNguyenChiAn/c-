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
	cout << " Ba so lon nhat la: " << endl;
	for(int i = 0; i < n; i++) {
		cout<< num[0] << " " << num[1] << " " << num[2];
		break;
	}
	
}
