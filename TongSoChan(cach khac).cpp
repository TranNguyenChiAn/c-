#include <iostream>
#include <cmath>
using namespace std;

int main () {
	int a, b, c, d, e, f, g, h, i, k;
	int TongChan;

	cout << "Nhap 10 so tu ban phim: ";
	cin >> a >> b >> c >> d >> e >> f >> g >> h >> i >> k;
	
	cout << "Cac so chan la: " << endl;
	if (a%2==0) {
		cout << "\t" << a << endl;
		TongChan += a;
	}
	
	
	if (b%2==0) {
		cout << "\t" << b << endl;
		TongChan += b;
	}
	
	if (c%2==0) {
		cout << "\t" << c << endl;
		TongChan += c;
	}
	
	if (d%2==0) {
		cout << "\t" << d << endl;
		TongChan += d;
	}
	
	if (e%2==0) {
		cout << "\t" << e << endl;
		TongChan += e;
	}
	
	if (f%2==0) {
		cout << "\t" << f << endl;
		TongChan += f;
	}
	
	if (g%2==0) {
		cout << "\t" << g << endl;
		TongChan += g;
	}
	
	if (h%2==0) {
		cout << "\t" << h << endl;
		TongChan += h;
	}
	
	if (i%2==0) {
		cout << "\t" << i << endl; 
		TongChan += i;
	}
	
	if (k%2==0) {
		cout << "\t" << k << endl;
		TongChan += k;
	}

	
	cout << "Tong cac so chan la: " << TongChan << endl;

}
