#include <iostream>
using namespace std;

int main () {
	int n;
	int i = 1;
	cout << " Nhap so: ";
	cin >> n;
	while(i<= 10) {
		cout << n << " x " << i << " = " << i * n << endl;
		i++;
	}	
}
