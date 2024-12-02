#include <iostream>
using namespace std;

int main () {
	int i = 1;
	int n;
	int Sc = 0, Sl;
	cout << " Nhap so nguyen n: ";
	cin >> n;
	
	
	while (i <= n) {    
		if(i%2 ==0){
		Sc += i;	
		}
		else {
			Sl += i;
		}
	i++;
	}
	cout << endl;
	
		cout << " Tong cac so chan la: " << Sc << endl;
		cout << " Tong cac so le la: " << Sl << endl;		
	
}
