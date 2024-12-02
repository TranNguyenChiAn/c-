#include <iostream>
using namespace std;
int main() {
	int a = 10, b = 3, c, d = 4;
	int e, g;
	a++;   // a = a + 1 = 11 
	cout << a << endl;
	c = a++ + 2;                     //A = 13
	cout << a << endl;
	e = ++a + b;					//B = 16
	g = e%d;					   // C = 4
	cout << c << endl;
	cout << e << endl;
	cout << g << endl;
	
	return 0;
 }
