#include <iostream>
#include <cstring>
#include <stdio.h>
#include <iomanip>
using namespace std;
struct CongNhan {
	string maCongNhan;
	string hoTen;
	float heSoLuong;
	int ngayCong;
};

void nhapMotCongNhan(CongNhan& cn);
void inMotCongNhan(CongNhan n);
void nhapDanhSachCongNhan(CongNhan dsCongNhan[], int &n);
void inDanhSachCongNhan(CongNhan dsCongNhan[], int n);
float tinhThuNhap(CongNhan cn);
void sapXepDanhSachCongNhan(CongNhan dsCongNhan[], int n);
void timKiemCongNhanTheoMa(CongNhan dsCongNhan[], int n, string maCN);
void swap(CongNhan& cn1, CongNhan& cn2);
void menu();

int main()
{
	menu();

	return 0;
};

void menu() {
	CongNhan dsCongNhan[50];
	int n;
	int choice;
	while (true) {
		cout << "\n***************MENU***************\n";
		cout << "\n**  1. Nhap cong nhan.\n";
		cout << "\n**  2. In danh sach cong nhan. \n";
		cout << "\n**  3. Tim kiem cong nhan theo ma.\n";
		cout << "\n**  4. Sap xep danh sach cong nhan theo thu nhap tang dan.\n";
		cout << "\n**  0. Thoat. \n";
		cout << "\nNhap lua chon:";
		cin >> choice;
		cin.ignore();
		switch (choice)
		{
			case 1:
				nhapDanhSachCongNhan(dsCongNhan, n);
				break;
			case 2:
				inDanhSachCongNhan(dsCongNhan, n);
				break;
			case 3:
			{
				string maCN;
				cout << "\nNhap ma cong nhan: ";
				getline(cin, maCN);
				timKiemCongNhanTheoMa(dsCongNhan, n, maCN);
				break;
			}
			case 4:
				sapXepDanhSachCongNhan(dsCongNhan, n);
				cout << "\nDanh sach cong nhan sau sap xep: \n";
				inDanhSachCongNhan(dsCongNhan, n);
				break;
			case 0:
				exit(0);
				break;
		}
	}
}

void nhapMotCongNhan(CongNhan& cn) {
	cout << "\nNhap ma cong nhan: ";
	getline(cin, cn.maCongNhan);
	cout << "\nNhap ho ten: ";
	getline(cin, cn.hoTen);
	cout << "\nNhap he so luong: ";
	cin >> cn.heSoLuong;
	cout << "\nNhap ngay cong : ";
	cin >> cn.ngayCong;
	cin.ignore();
}

void inMotCongNhan(CongNhan cn) {
	cout << cn.maCongNhan << setw(20) << cn.heSoLuong << setw(20) << cn.heSoLuong << setw(20) << cn.ngayCong << setw(20) << tinhThuNhap(cn) << endl;
}

void nhapDanhSachCongNhan(CongNhan dsCongNhan[], int &n) {
	cout << "\nNhap so luong cong nhan: ";
	cin >> n;
	cin.ignore();
	for (int i = 0; i < n; i++) {
		cout << "\nNhap cong nhan thu: " << i + 1 <<endl;
		nhapMotCongNhan(dsCongNhan[i]);
	}
}

void inDanhSachCongNhan(CongNhan dsCongNhan[], int n) {
	cout << "\nMa Cong nhan" << setw(20) << "| Ho Ten" << setw(20) << "| He so luong " << setw(20) << "| So ngay cong" << setw(20) << "| Thu nhap" << endl;
	for (int i = 0; i < n; i++) {
		inMotCongNhan(dsCongNhan[i]);
	}
}

float tinhThuNhap(CongNhan cn) {
	return cn.ngayCong * cn.heSoLuong;
}

void swap(CongNhan& cn1, CongNhan& cn2) {
	CongNhan temp;
	temp = cn1;
	cn1 = cn2;
	cn2 = temp;
}

void sapXepDanhSachCongNhan(CongNhan dsCongNhan[], int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (tinhThuNhap(dsCongNhan[i]) > tinhThuNhap(dsCongNhan[j])) {
				swap(dsCongNhan[i], dsCongNhan[j]);
			}
		}
	}
}

//convert chuỗi ban đầu thành chuỗi các ký tự thường: Cn001 => cn001, cN001 => cn001, CN001=>cn001
string convertToLower(string str) {
	for (char& ch:str) {
		ch = tolower(ch);
	}
	return str;
}

void timKiemCongNhanTheoMa(CongNhan dsCongNhan[], int n, string maCN) {
	bool found = false;
	int index = -1;
	for (int i = 0; i < n; i++) {
		CongNhan cn = dsCongNhan[i];
		if (convertToLower(cn.maCongNhan).compare(convertToLower(maCN)) == 0 ){
			found = true;
			index = i;
			break;
		}
	}

	if (found == true) {
		inMotCongNhan(dsCongNhan[index]);
	}
	else {
		cout << "\nKhong tim thay cong nhan nao co ma la " << maCN << endl;
	}
}
