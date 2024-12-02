#include <iostream>
using namespace std;

void nhapSo(int &a, int &b, int &c) {
	cout << " Nhap 3 so: ";
	cin >> a >> b >> c;
}


int timMax(int &a, int &b, int &c) {
	int max = 0;
	if(a > b && a > c) {
		max = a;
	} 
	else if (b > a && b > c) {
		max = b;
	} 
	else if (c > a && c > b) {
		 max = c;
	}
	cout << " So lon nhat la: " << max;
	
}

int timMin(int &a, int &b,int &c) {
	int min = 0;
	if(a < b && a < c) {
		min = a;
	}
	else if (b < a && b < c) {
		min = b;
	}
	else if (c < a && c < b) {
		min = c;
	}
	cout << " So nho nhat la: " << min;
	
}

int main() {
	int a, b, c;
	nhapSo(a, b, c);
	
	cout << endl;
	timMax(a, b, c) ;
	
	cout << endl;
	timMin(a, b, c) ;
	
	
}

