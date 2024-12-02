#include <iostream>
using namespace std;

int main () {
	int so;
    int tong = 0;
    cout << "Nhap so: ";
    cin >> so;
    cout << "Tong cac chu so cua so " << so << " la: ";
    
    while (so!= 0) {
        tong += so % 10;
        so /= 10;
    }
    cout << tong << endl;
    
    return 0;	
}
