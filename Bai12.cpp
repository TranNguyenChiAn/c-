#include <iostream> 
using namespace std;

int main () {
	int n;
	cout << " Nhap so: " ; cin >> n;
	if(n%5==0 && n%11==0) {
		cout << " So " << n << " chia het cho 5 va 11." << endl;
	}
	else {
		cout << " So " << n << " khong chia het cho 5 va 11." << endl;
	}
	
}
