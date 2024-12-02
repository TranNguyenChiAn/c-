#include <iostream>
using namespace std;
int main() {
	int n = 1, a, b;
	int max;
    cout << " Nhap a: "; cin >> a;
    cout << " Nhap b: "; cin >> b;
    cout << " Cac uoc so cua " << a << " va " << b << " la: ";
    
    while(n > 0) {
    	if(a%n==0 && b%n==0) {
    		cout << n << " ";
		}
		n++;	
 	}

 	cout << endl;
    
    return max;
}

	


