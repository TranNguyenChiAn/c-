#include <iostream>
using namespace std;

int main() {
	int a = 30, b = 40;	
	int c = (a >= b) ? a : b; 
	cout << c << endl;

	int i = 8;
	int n = 10;
	cout << (i == n - 1 ? "":"\n------") << endl; 

	return 0;
}

