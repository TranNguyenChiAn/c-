#include <iostream>
using namespace std;
 
int main() {
    int a, b;
    long luyThua = 1;
    int i = 1;
    cout << "Nhap co so: ";
    cin >> a;
    cout << "Nhap so mu: ";
    cin >> b;
    
    while(i<=b) {
    	i++;
    	luyThua = luyThua * a;
	}
    cout << endl;
    cout << a << " ^ " << b << " = " << luyThua << endl;
    return 0;
}
