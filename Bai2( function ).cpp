#include <iostream>
using namespace std;

void inSoNguyenTo (int begin, int end) {
	int control = 0, count = 0;
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
	
}

int demSoNguyenTo(int begin, int end) {
	int control = 0, count = 0;
	   for (int n = begin; n <= end; n++) { 
        for (int j = 2; j < n; j++) {
            if (n % j == 0) {
                control++;
            }
        }
        if (control == 0 && n != 1) {
            count++;
        }
	    control = 0;
    	}
    return count;
	
}
int main() {
	int begin, end, count = 0, control = 0;
    cout << "Nhap so bat dau: ";
    cin >> begin;
    cout << "Nhap so ket thuc: ";
    cin >> end;
    
    cout << " Cac so nguyen to trong khoang la: ";
    inSoNguyenTo(begin, end);
	cout << endl;
    cout << "\n So so nguyen to trong khoang tu " << begin << " den " << end << " la: "<< demSoNguyenTo(begin, end) << endl;
}

