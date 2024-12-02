#include <iostream>
using namespace std;

bool testNumber(int n) {
	if (n < 2) {
       return false;
    }
    else {
       for (int i = 2; i < n; i++) {
           if (n % i == 0) {
               return false;
                break;
            }
            return true;
        }
    }
}

int main() {
	int n;
    cout << "Nhap n: ";
    cin >> n;

    if (testNumber(n)) {
        cout << n << " la so nguyen to.";
    }
    else {
        cout << n << " khong phai la so nguyen to.";
    }
    
    return 0;
}

