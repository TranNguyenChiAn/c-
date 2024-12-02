#include <iostream>
using namespace std;

int main () {
	int n = 1;
	int S = 0;
	cout << " 10 so tu nhien dau tien la: ";
	for(; n <= 10; n++) {
		cout << n << ", ";
		S = S + n;
		
	}
	cout << endl;
	cout << " Tong 10 so dau tien la: ";
	cout << S;
}
