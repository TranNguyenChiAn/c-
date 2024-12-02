#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <cstring>
using namespace std;

struct Diem {
	int maSo;
	char hoTen[30];
	float monToan, monVatLy, monHoaHoc;
};

void menu();

void nhapMotThiSinh(Diem& diem);
void inMotThiSinh(Diem& diem);
void nhapDsThiSinh(Diem dsThiSinh[], int& n);
void inDsThiSinh(Diem dsThiSinh[], int n);

void timThiSinhTheoMaSo(Diem dsThiSinh[], int n);

float tinhDiemTB(Diem diem);
void swap(Diem& diem1, Diem& diem2);
void sapXepDiemTb(Diem dsThiSinh[], int n);

int main() {
	
	menu();
	return 0;
}

void menu() {
	int choice;
	Diem dsThiSinh[5];
	int n = 0;

	while (true) {
		cout << endl;
		cout << " \t |-----------------------MENU-----------------------|" << endl;
		cout << " \t | 1. Them thi sinh.                                |" << endl;
		cout << " \t | 2. In danh sach thi sinh.                        |" << endl;
		cout << " \t | 3. Tim thi sinh theo ma so.                      |" << endl;
		cout << " \t | 4. Sap xep theo thu tu diem Tb tang dan.         |" << endl;
		cout << " \t | 0. Thoat.                                        |" << endl;
		cout << " \t |--------------------------------------------------|" << endl;
		cout << " Nhap lua chon: "; cin >> choice;
		cin.ignore();
		switch (choice)
		{
		case 1:
			nhapDsThiSinh(dsThiSinh, n);
			break;
		case 2:
			if (n > 0) {
				inDsThiSinh(dsThiSinh, n);
			}
			else {
				cout << "\nDanh sach thi sinh trong! \n";
			}
			break;
		case 3:
			timThiSinhTheoMaSo(dsThiSinh, n);
			break;
		case 4:
			sapXepDiemTb(dsThiSinh, n);
			cout << " Danh sach thi sinh co diem TB tang dan" << endl;
			inDsThiSinh(dsThiSinh, n);
			break;
		case 0:
			cout << " Ban da thoat khoi chuong trinh!" << endl;
			exit(0);
			break;
		}
	}
}

float tinhDiemTB(Diem diem) {
	return (diem.monToan + diem.monVatLy + diem.monHoaHoc) / 3;
}

void swap(Diem& diem1, Diem& diem2)
{
	Diem temp;
	temp = diem1;
	diem1 = diem2;
	diem2 = temp;
}

void sapXepDiemTb(Diem dsThiSinh[], int n)
{
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (tinhDiemTB(dsThiSinh[i]) > tinhDiemTB(dsThiSinh[j])) {
				swap(dsThiSinh[i], dsThiSinh[j]);
			}
		}
	}
}


void nhapMotThiSinh(Diem& diem) {
	cout << " Nhap ma so thi sinh: ";
	cin >> diem.maSo;
	cin.ignore();

	cout << " Nhap ho ten cua thi sinh: ";
	cin.getline(diem.hoTen, 30);

	cout << " Nhap diem Toan cua thi sinh: ";
	cin >> diem.monToan;

	cout << " Nhap diem Vat Ly cua thi sinh: ";
	cin >> diem.monVatLy;

	cout << " Nhap diem Hoa Hoc cua thi sinh: ";
	cin >> diem.monHoaHoc;
	cin.ignore();
	cout << endl;
}

void nhapDsThiSinh(Diem dsThiSinh[], int& n) {
	cout << "\nNhap so luong thi sinh: ";
	cin >> n;
	cin.ignore();
	for (int i = 0; i < n; i++) {
		cout << " Nhap thi sinh thu " << i + 1 << ": " << endl;
		nhapMotThiSinh(dsThiSinh[i]);
	}
}

void inMotThiSinh(Diem& diem) {
	cout << " " << diem.maSo << "\t\t" << diem.hoTen << setw(20) << diem.monToan << setw(20) << diem.monVatLy << setw(20) << diem.monHoaHoc << setw(25) << tinhDiemTB(diem) << endl;
}


void inDsThiSinh(Diem dsThiSinh[], int n) {
	cout << " Ma so " << "\t\t" << "Ho Ten" << setw(25) << "Toan" << setw(20) << "Ly" << setw(20) << "Hoa" << setw(25) << "Diem TB" << endl;
	for (int i = 0; i < n; i++) {
		inMotThiSinh(dsThiSinh[i]);
	}
}

void timThiSinhTheoMaSo(Diem dsThiSinh[], int n) {
	int maTim;
	cout << " Nhap ma so thi sinh can tim: ";
	cin >> maTim;
	for (int i = 0; i < n; i++) {
		if (maTim == dsThiSinh[i].maSo) {
			cout << " Ma so " <<  "\t\t" << "Ho Ten" << setw(25) << "Toan" << setw(20) << "Ly" << setw(20) << "Hoa" << setw(20) << "Diem TB" << endl;
			inMotThiSinh(dsThiSinh[i]);
		}
		else {
			cout << " Khong ton tai ma so!" << endl;
		}
	}
}


