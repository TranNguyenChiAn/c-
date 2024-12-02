#include <iostream>
using namespace std;

int main() {
	int n;
	int a[100];
	int index = 0;
	while(true) {
		cout << " Nhap n: "; cin >> n;
		for(int i = n; i >= 1; i /= 2) {
			a[index] = i%2;
			index++;
		}
		
		for(int i = index-1; i >= 0; i--) {
			cout << a[i] << " ";
		}
		cout << endl;
	}
	
	
}
