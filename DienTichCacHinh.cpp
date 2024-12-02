#include <iostream>
using namespace std;

int main () {
	float ChieuDai, ChieuRong; 
	float Canh; 
	float BanKinh;
	double Pi = 3.14;
	
	cout << endl;
	cout << "Nhap chieu dai cua hinh chu nhat: "; cin >> ChieuDai;
	cout << "Nhap chieu rong cua hinh chu nhat: "; cin >> ChieuRong;
	cout << "\t Dien tich hinh chu nhat la: " << ChieuDai * ChieuRong << endl;
	cout << "\t Chu vi hinh chu nhat la: " << (ChieuDai + ChieuRong) * 2<< endl;
	cout << endl;
	
	cout << "Nhap do dai canh hinh vuong: ";
	cin >> Canh;
	cout << "\t Dien tich hinh Vuong: " << Canh * Canh << endl;
	cout << "\t Chu vi hinh Vuong la: " << Canh * 4 << endl;
	cout << endl;
	
	cout << "Nhap ban kinh hinh tron: ";
	cin >> BanKinh;
	cout << "\t Dien tich hinh Tron la: " << 2 * Pi * BanKinh * BanKinh << endl;
	cout << "\t Chu vi hinh Tron la: " << 2 * Pi * BanKinh << endl;
	cout << endl;
	
	return 0;
	
}
