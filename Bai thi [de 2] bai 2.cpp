#include <iostream> 
#include <stdio.h>
#include <cstring>
#include <iomanip>
using namespace std;

struct HocSinh {
	int stdCode;
	string stdFullName;
	float math, physics, chemistry;
};

void menu();
float diemTB(HocSinh hs);

void nhapMotThiSinh(HocSinh& hs);
void inMotThiSinh(HocSinh hs);
void nhapDanhSachThiSinh(HocSinh dsTS[], int n);
void inDanhSachThiSinh(HocSinh dsTS[], int n);

void timThiSinhTheoTen(HocSinh dsTS[], int n, string maTS);
void swap(HocSinh& hs1, HocSinh& hs2);
void sapXepDiemToan(HocSinh dsTS[], int n);

int main() {

	menu();
	return 0;
}

void menu() {
	HocSinh dsTS[5];
	int choice;
	int n;
	while(true) {
		cout << endl;
		cout << "|---------------------------MENU-----------------------|" <<endl;
		cout << "| 1. Them thi sinh.                                    |" << endl;
		cout << "| 2. In danh sach thi sinh.                            |" << endl;
		cout << "| 3. Tim thi sinh theo ten.                            |" << endl;
		cout << "| 4. In danh sach TS theo thu tu dien Toan tang dan.   |" << endl;
		cout << "| 0. Thoat.                                            |" << endl;
 		cout << "|------------------------------------------------------|" << endl;
 		cout << " Nhap lua chon: ";
 		cin >> choice;
 		
 		switch(choice) {
	 		case 1:
	 			cout << " Nhap so luong thi sinh: ";
	 			cin >> n;
			 	nhapDanhSachThiSinh(dsTS, n); 
	 			break;
	 		case 2:
			 	inDanhSachThiSinh(dsTS, n); 
	 			break;
	 		case 3:
	 			{
				 
	 			string maTS;
				cout << "\nNhap ma thi sinh : ";
				getline(cin, maTS);
				timThiSinhTheoTen(dsTS, n, maTS);
	 			break;
	 			
	 			}
	 		case 4: 
	 			sapXepDiemToan(dsTS, n);
	 			cout << " Danh sach sau khi sap xep la:" << endl;
	 			inDanhSachThiSinh(dsTS, n);
	 			break;
	 		case 0: 
	 			exit(0);
	 			break;
	 		default: 
	 			cout << " Khong hop le. Vui long nhap lai!" << endl;
	 		break;
 		}
 	}
}

float diemTB(HocSinh hs) {
	return (hs.math + hs.chemistry + hs.physics) / 3;
}

void nhapMotThiSinh(HocSinh &hs) {
	
	cout << " Nhap ma thi sinh: ";
	cin >> hs.stdCode;
	cin.ignore();
	
	cout << " Nhap ten thi sinh: ";
	getline(cin, hs.stdFullName);
	
	cout << " Nhap diem Toan cua thi sinh: ";
	cin >> hs.math;
	
	cout << " Nhap diem Ly cua thi sinh: ";
	cin >> hs.physics;
	
	cout << " Nhap diem Hoa cua thi sinh: ";
	cin >> hs.chemistry;
	
}

void inMotThiSinh(HocSinh hs) {
	cout << " \t" << hs.stdCode;
	cout << " \t\t " << hs.stdFullName;
	cout << " \t\t " << hs.math;
	cout << " \t\t " << hs.physics;
	cout << " \t\t " << hs.chemistry;
	cout << setw(20);
	cout << diemTB(hs); 
	cout << endl;
}

void nhapDanhSachThiSinh(HocSinh dsTS[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "\nNhap thi sinh thu " << i + 1 << endl;
        nhapMotThiSinh(dsTS[i]);
        
    }
}

void inDanhSachThiSinh(HocSinh dsTS[], int n) {
	cout << " Ma thi sinh \t\t Ho ten \t\t Diem Toan \t\t Diem Ly \t\t Diem Hoa " << setw(20) << " Diem TB " << endl;
    for (int i = 0; i < n; i++) {
        inMotThiSinh(dsTS[i]);
    }
}


void swap(HocSinh& hs1, HocSinh& hs2) {
    HocSinh temp = hs1;
    hs1 = hs2;
    hs2 = temp;
}
void sapXepDiemToan(HocSinh dsTS[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (dsTS[i].math > dsTS[j].math) {
                swap(dsTS[i], dsTS[j]);
            }
        }
    }
}


string convertToLower(string str) {
	for(char& ch:str) {
		ch = tolower(ch);
	}
	return str;
}

void timThiSinhTheoTen(HocSinh dsTS[], int n, string maTS) {
	bool found = false;
	int index = -1;
	for (int i = 0; i < n; i++) {
		HocSinh hs = dsTS[i];
		if (convertToLower(hs.maTS).compare(convertToLower(maTS)) == 0 ){
			found = true;
			index = i;
			break;
		}
	}

	if (found == true) {
		inMotThiSinh(dsTS[index]);
	}
	else {
		cout << "\nKhong tim thay thi sinh!" << maTS << endl;
	}
}




