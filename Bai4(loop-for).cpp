
#include <iostream>
using namespace std;

int main() {
	int begin, end, count = 0, control = 0;

    cout << "Nhap so bat dau: ";
    cin >> begin;
    cout << "Nhap so ket thuc: ";
    cin >> end;
    cout << " Cac so nguyen to trong khoang la: ";
    for (int n = begin; n <= end; n++) { 
        for (int j = 2; j < n; j++) {
            if (n % j == 0) {
                control++;
            }
        }
        if (control == 0 && n != 1) {
            count++;
            cout << n << " ";
        }
        control = 0;
    }

    cout << "\n So so nguyen to trong khoang tu " << begin << " den " << end << " la: " << count <<endl;
    
    
    return 0;
}


