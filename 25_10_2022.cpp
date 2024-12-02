#include <iostream> 
#include <iomanip>
using namespace std;
int main() {
	int n;
	int tongChan = 0;
	int tongLe = 0;
	int x;
	bool check = true;
	
	cout << " Nhap so phan tu: "; cin >> n;
	cout << endl;
	
	int num[n];
	for(int i = 0; i < n; i++) {
		cout << " Nhap phan tu thu " << i+1 << ": ";
		cin >> num[i];
		
		if (num[i] %2 == 0) {
			tongChan += num[i];
		} else { 
			tongLe += num[i];
		}
	}
	cout << endl;
	cout << " Tong cac so chan la: " << tongChan << endl;
	cout << " Tong cac so la: " << tongLe << endl;
	
	cout << endl;
	cout << " In mang: " << endl;
	for(int i = 0; i < n; i++) {
		cout << setw(5) << num[i] << " ";
	}
	
	// Kiem tra so can xet da xuat hien trong mang chua
	cout << endl;
	cout << endl;
	cout << " Nhap so can xet: "; cin >> x;
	for(int i = 0; i < n; i++) {
		if(x != num[i]) {
			check = true;
			break;
		}
	}	
		if (check = true) {
			cout << x << " chua xuat hien trong mang";
		}else {
			cout << x << " da xuat hien trong mang!" << endl;
		}
	
	
	// Sap xep tang dan
	cout << endl;
	for(int i = 0; i < n-1; i++) {      // Sap xep tang dan
		for(int j = i + 1; j < n; j++) {
			if(num[i] > num[j]) {
				int temp = num[i];
				num[i] = num[j];
				num[j] = temp;
			}
		}
	}
	cout << endl;
	cout << " In mang sap xep tang dan: " << endl;
	for(int i = 0; i < n; i++) {
		cout<< num[i] << " ";
	}
	
	// Sap xep giam dan
	cout << endl;
	for(int i = 0; i < n-1; i++) {      // Sap xep giam dan
		for(int j = i + 1; j < n; j++) {
			if(num[i] < num[j]) {
				int temp = num[i];
				num[i] = num[j];
				num[j] = temp;
			}
		}
	}
	cout << endl;
	cout << " In mang sap xep giam dan: " << endl;
	for(int i = 0; i < n; i++) {
		cout<< num[i] << " ";
	}
}
/*
for(int i = 0; i < sizeof(number)/sizeof(int); i++) {
		
		cout << number[i] << endl;
	}
*/



/*
	cout << " Kich thuoc cua arr: " << sizeof(arr) << endl;
	cout << " Kich thuoc cua char: " << sizeof(char) <<endl;
	cout << " Trong arr co tat ca: " << sizeof(arr)/sizeof(arr[0]) << " phan tu"<<endl;
	cout << " Trong arr co tat ca: " << sizeof(arr)/sizeof(char) << " phan tu"<<endl;
*/


/* 
	- Mang n phan tu thi co index/chi so tu [0;n-1].
	- (Dia chi phan tu hien tai - dia chi cua phan tu dau)/kich thuoc cua kieu du lieu
	- So luong phan tu:
		n = sizeof(ten_mang)/sizeof(int)
		n = sizeof(ten_mang)/sizeof(ten_mang[chi_so_cua_mang])
	- 
*/
