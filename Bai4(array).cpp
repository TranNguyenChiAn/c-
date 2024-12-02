#include <iostream> 
using namespace std;
int main() {
	int n;
	cout << " Nhap so phan tu: "; cin >> n;
	cout << endl;
	
	int num[n];
	for(int i = 0; i < n; i++) {
		cout << " Nhap phan tu thu " << i+1 << ": ";
		cin >> num[i];
	}
	
	for(int i = 0; i < n-1; i++) {      // Sap xep tang dan
		for(int j = i + 1; j < n; j++) {
			if(num[i] < num[j]) {
				int temp = num[i];
				num[i] = num[j];
				num[j] = temp;
			}
		}
	}
	cout << endl;
	cout << " In mang sap xep giam dan: " << endl;
	for(int i = 0; i < n; i++) {
		cout<< num[i] << " ";
	}
}
