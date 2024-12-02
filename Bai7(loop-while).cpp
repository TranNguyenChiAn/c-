#include <iostream>
#include <iomanip>
using namespace std;

int main () {
	int i = 1;
	int j ;
	cout << " In bang so: " << endl;
	
	while(i <= 10) {
		j = i;
		i++;
		while(j <= 100) {
			cout << "\t" << j << " ";
			j += 10;
		}
		cout << endl;
		 
	}
	return 0;
}
