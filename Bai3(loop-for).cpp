
#include <iostream>
using namespace std;

int main() {
	int n;
    cout << "Nhap n: ";
    cin >> n;
    bool flag = true; 
    if (n < 2) {
       flag = false;
    }
    else {
       for (int i = 2; i < n; i++) {
           if (n % i == 0) {
               flag = false;
                break;
            }
        }
    }
    
    if (flag == true) {
        cout << n << " la so nguyen to.";
    }
    else {
        cout << n << " khong phai la so nguyen to.";
    }
    
    
    
    return 0;
}
