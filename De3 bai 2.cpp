#include <iostream>
#include <cstring>
#include <stdio.h>
#include <iomanip>
using namespace std;

struct SinhVien {
	char Id[10];
	char name[100];
	float diemLy;
	float diemHoa;
	float diemToan;
	float diemTB;
	char hocLuc[11];
};

void menu(SinhVien dsSV[], int n);

void nhapMotSinhVien(SinhVien& sv);
void inMotSinhVien(SinhVien sv);
void nhapDanhSachSinhVien(SinhVien dsSV[], int n);
void inDanhSachSinhVien(SinhVien dsSV[], int n);

void tinhDiemTB(SinhVien& sv);
void xepLoai(SinhVien& sv);

void timDiemToanMax(SinhVien dsSV[], int n);
void timDiemTBMax(SinhVien dsSV[], int n);

int main() {
	SinhVien dsSV[50];
	int n = 0;
	menu(dsSV, n);
	return 0;
}

void menu(SinhVien dsSV[], int n) {
	int choice;
	while (true) {
		cout << endl;
		cout << " \t |-----------------------MENU-----------------------|" << endl;
		cout << " \t | 1. Them sinh vien.                               |" << endl;
		cout << " \t | 2. In danh sach sinh vien.                       |" << endl;
		cout << " \t | 3. In sinh vien co diem toan cao nhat.           |" << endl;
		cout << " \t | 4. In sinh vien co diem trung binh lon nhat.     |" << endl;
		cout << " \t | 0. Thoat.                                        |" << endl;
		cout << " \t |--------------------------------------------------|" << endl;
		cout << " Nhap lua chon: "; cin >> choice;
		switch (choice) {
		case 1:
			cout << " \t  1. Them sinh vien." << endl;
			cout << "----------------------------------------------------" << endl;	
			cout << "\nNhap so luong sinh vien: ";
			cin >> n;
		
			nhapDanhSachSinhVien(dsSV, n);
			break;
		case 2:
			cout << " \t  2. In danh sach cong nhan." << endl;
			cout << "----------------------------------------------------" << endl;
			inDanhSachSinhVien(dsSV, n);
			break;
		case 3:
			cout << " \t  3. In sinh vien co diem toan cao nhat." << endl;
			cout << "----------------------------------------------------" << endl;
			timDiemToanMax(dsSV, n);
			inDanhSachSinhVien(dsSV, n);
			break;
		case 4:
			cout << " \t  4. In sinh vien co diem trung binh lon nhat." << endl;
			cout << "----------------------------------------------------" << endl;
			timDiemTBMax(dsSV, n);
			inDanhSachSinhVien(dsSV, n);
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

void tinhDiemTB(SinhVien& sv) {
	int diemTB = 0;
	sv.diemTB = (sv.diemToan + sv.diemLy + sv.diemHoa) / 3;
}


void xepLoai(SinhVien& sv)
{
	if (sv.diemTB >= 9 && sv.diemTB <= 10) {
		strcpy(sv.hocLuc, "Xuat sac");
	}
	else if (sv.diemTB >= 8 && sv.diemTB < 9) {
		strcpy(sv.hocLuc, "Gioi");
	}
	else if (sv.diemTB >= 6.5 && sv.diemTB < 8) {
		strcpy(sv.hocLuc, "Kha");
	}
	else if (sv.diemTB >= 5 && sv.diemTB < 6.5) {
		strcpy(sv.hocLuc, "Trung binh");
	}
	else {
		strcpy(sv.hocLuc, "Yeu");
	}
}

void nhapMotSinhVien(SinhVien& sv)
{
	cout << " \n Nhap ID sinh vien: ";
	cin.ignore();
	cin.getline(sv.Id, 10);

	cout << " \n Nhap ho ten: ";
	cin.getline(sv.name, 100);

	cout << "\n Nhap diem toan cua sinh vien: ";
	cin >> sv.diemToan;

	cout << "\n Nhap diem ly cua sinh vien: ";
	cin >> sv.diemLy;

	cout << "\n Nhap diem hoa cua sinh vien: ";
	cin >> sv.diemHoa;
	cin.ignore();
	tinhDiemTB(sv);
}

void inMotSinhVien(SinhVien sv)
{
	cout << " " << sv.Id ;
	cout << " \t\t " << sv.name;
	cout << " \t\t " << sv.diemToan;
	cout << " \t\t " << sv.diemLy;
	cout << " \t\t " << sv.diemHoa;
	cout << " \t\t " << sv.diemTB;
	cout << setw(30) << sv.hocLuc;
	tinhDiemTB(sv);
	xepLoai(sv);
	cout << endl;
}

void nhapDanhSachSinhVien(SinhVien dsSV[], int n)
{
	for (int i = 0; i < n; i++) {
		cout << "\nNhap sinh vien thu " << i + 1 << endl;
		nhapMotSinhVien(dsSV[i]);
		xepLoai(dsSV[i]);	
	}
}

void inDanhSachSinhVien(SinhVien dsSV[], int n)
{
	cout << " ID \t\t Ho ten \t\t Diem Toan  \t Diem Ly \t Diem Hoa \t Diem TB \t\t Xep loai" << endl;
	cout << "-----------------------------------------------------------------------------------------------------------------------------------" << endl;
	for (int i = 0; i < n; i++) {
		inMotSinhVien(dsSV[i]);
	}
}

void timDiemToanMax(SinhVien dsSV[], int n)
{
	SinhVien tmp;
    for(int i = 0;i < n;i++) {
        for(int j = i+1; j < n;j++) {
            if(dsSV[i].diemToan < dsSV[j].diemToan) {
                tmp = dsSV[i];
                dsSV[i] = dsSV[j];
                dsSV[j] = tmp;
            }
        }
    }	
}

void timDiemTBMax(SinhVien dsSV[], int n)
{
	SinhVien tmp;
	for(int i = 0;i < n;i++) {
        for(int j = i+1; j < n;j++) {
            if(dsSV[i].diemTB < dsSV[j].diemTB) {
                tmp = dsSV[i];
                dsSV[i] = dsSV[j];
                dsSV[j] = tmp;
            }
        }
    }
    
}


