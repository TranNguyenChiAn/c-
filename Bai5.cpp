#include <iostream>

using namespace std;

 int main () {
 	int a, b, c;
 	cout << "\t Nhap 3 so tuoi: ";
 	cin >> a;
	cin >> b;
	cin >> c;
 	cout << endl;
 	
 	 if(a > b && a > c) {
 		cout << "\t Nguoi lon tuoi nhat la: " << a << " tuoi." << endl;
	 }
	 else if(b > c && b > a) {
	 	cout << "\t Nguoi lon tuoi nhat la: " << b << " tuoi." << endl;
	 }
	 else if(c > a && c > b) {
	 	cout << "\t Nguoi lon tuoi nhat la: " << c << " tuoi." << endl;
	 }
	 
	 
	 if(a < b && a < c) {
 		cout << "\t Nguoi nho tuoi nhat la: " << a << " tuoi." << endl;
	 }
	 else if(b < c && b < a) {
	 	cout << "\t Nguoi nho tuoi nhat la: " << b << " tuoi." << endl;
	 }
	 else if(c < a && c < b) {
	 	cout << "\t Nguoi nho tuoi nhat la: " << c << " tuoi." << endl;
	 }
	 
	return 0;

 }
