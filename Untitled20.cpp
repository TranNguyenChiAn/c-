#include <iostream>
#include <string>
using namespace std;

struct SinhVien {
	int tuoi;
	int maSV;
	char hoTen[50];
    char gioiTinh[5];
    char queQuan[30];
	double diemTB;
};

void nhapMotSinhVien(SinhVien &sv);
void inMotSinhVien(SinhVien &sv);
void nhapDanhSachSinhVien(SinhVien dsSV[], int &n);
void inDanhSachSinhVien(SinhVien dsSV[], int n);
void menu(SinhVien dsSV[], int& n);

int main () {
	SinhVien dsSV[50];
	int n;
	menu(dsSV, n);
	return 0;
}

void menu(SinhVien dsSV[], int& n) {
	int choice;
	while(true) {
		cout << "***************MENU*****************" << endl;
		cout << " Nhap danh sach sinh vien: " << endl;
		cout << " 2. Xuat danh sach sinh vien." << endl;
		cout << " 0. Thoat" << endl;
		cout << " Nhap lua chon: "; cin >> choice;
		
		switch (choice) {
			case 1:
				cout << " \n Nhap danh sach sinh vien: \n";	
				cout << " Nhap so luong sinh vien: "; cin >> n; 
				nhapDanhSachSinhVien(dsSV, n);
				break;
			case 2:
				cout << " \n In danh sach sinh vien: \n";
				inDanhSachSinhVien(dsSV, n);
				break;
			case 0:
				cout << " Ban da thoat khoi chuong trinh!" << endl;
				exit(0);
				break;
		}
	}
}

void nhapMotSinhVien(SinhVien &sv) {
	cout << " \n Nhap ma sinh vien: ";
	cin >> sv.maSV;
	cin.ignore();
	
	cout < " \n Nhap ho ten: "; 
	fflush(stdin); gets(sv.hoTen);
	
	cout << "\n Nhap tuoi sinh vien: "; 
	cin >> sv.tuoi;
	
	cout << "\n Nhap gioi tinh sinh vien: ";
	fflush(stdin); gets(sv.gioiTinh);
	
	cout << "\n Nhap que quan sinh vien: "; 
	fflush(stdin); gets(sv.queQuan);
	
	cout << "\n Nhap diem trung binh sinh vien: "; 
	cin >> sv.diemTB;
}

void inMotSinhVien(SinhVien &sv) {
	cout << " \tMa sinh vien: " << sv.maSV << endl;
	cout << " \tHo ten: " << sv.hoTen << endl;
	cout << " \tTuoi: " << sv.tuoi << endl;
	cout << " \tGioi tinh: " << sv.gioiTinh << endl;
	cout << " \tQue quan: " << sv.queQuan << endl;
	cout << " \tDiem trung binh: " << sv.diemTB << endl;
}

void nhapDanhSachSinhVien(SinhVien dsSV[], int n) {
	for (int i = 0; i < n; i++) {
		cout << " \t Nhap sinh vien thu " << i + 1 << endl;
		nhapMotSinhVien(dsSV[i]);
	}
}

void inDanhSachSinhVien(SinhVien dsSV[], int n) {
	for (int i = 0; i < n; i++) {
		cout << " \t Sinh vien thu " << i + 1 << endl;
		inMotSinhVien(dsSV[i]);
	}
}


