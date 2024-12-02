#include <iostream>
#include <iomanip>
using namespace std;

int main () {
	int i , j;
	cout << " In bang so: " << endl;
	
	for(int i = 1; i <= 10; i++) {
		for(j=i; j<=100; j+=10) {
			cout << j << " ";
		}
		cout << endl;
	}
	return 0;
}
