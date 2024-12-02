
#include <iostream>
using namespace std;

int main() {
	int n, end, count = 0, control = 0;
    cout << "Nhap so: ";
    cin >> end;
    cout << " So nguyen to gan nhat la: ";
   
    for (int n = end; n > 1; n--) { 
        for (int j = 2; j < n; j++) { 
            if (n % j == 0) {
            	control++;
                continue;
            }
            
        }
        if (control == 0 && n != 1) {
            cout << n;  
        	break;
        }
        
        control = 0;
    }
    
    return 0;
}
