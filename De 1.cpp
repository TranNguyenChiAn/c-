#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;

int main() {
	int n = 10;
	int a[n];
	int temp = 0;
	for(int i = 0; i < n; i++) {
		cout << " Nhap phan tu thu " << i + 1 << ": ";
		cin >> a[i];
	}
	
	cout << " In mang theo thu tu tang dan: " << endl;
	for(int i = 0; i < n; i++){
		for(int j = i + 1; j < n ; j++) {
			if(a[i] > a[j]) {
				temp = a[i];	
				a[i] = a[j];
				a[j] = temp;
			
			}
		}
		cout << a[i] << " ";
	}
	
}
