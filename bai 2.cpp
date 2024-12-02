#include <iostream>
#include<stdio.h>
#include <cstring>
using namespace std;

struct CongNhan {
	char hoTen[50];
	char maCongNhan[10];
	float heSoLuong;
	int ngayCong;
	float Luong;
};

void menu(CongNhan dsCN[], int n);
void nhapMotCongNhan(CongNhan &cn);
void inMotCongNhan(CongNhan cn);
void nhapDanhSachCongNhan (CongNhan dsCN[], int n);
void inDanhSachCongNhan (CongNhan dsCN[], int n);

void timCongNhan(CongNhan dsCN[], int n);

void tinhLuong(CongNhan dsCN[], int n);
void sapXep(CongNhan dsCN[], int n);
void inBangLuongMotCongNhan(CongNhan cn);
void inDanhSachBangLuong(CongNhan dsCN[], int n);

int main() {
	CongNhan dsCN[5];
	int n;
	menu(dsCN, n);
	return 0;
}

void menu(CongNhan dsCN[], int n) {
	int choice;
	cout << endl;	
	while(true) {
		cout << " \t |-----------------------MENU-----------------------|" << endl;
		cout << " \t | 1. Them cong nhan.                               |" << endl;    
		cout << " \t | 2. In danh sach cong nhan.                       |" << endl;
		cout << " \t | 3. Tim cong nhan theo ma so.                     |" << endl;
		cout << " \t | 4. Sap xep danh sach theo muc thu nhap tang dan. |" << endl;     
		cout << " \t | 0. Thoat.                                        |" << endl;
		cout << " \t |--------------------------------------------------|" << endl;
		cout << " Nhap lua chon: "; cin >> choice;
		switch(choice) {
			case 1:
				cout << " \t  1. Them cong nhan." << endl;
				 cout << "\nNhap so luong cong nhan: ";
            	cin >> n;
				cout << "----------------------------------------------------" << endl;
				nhapDanhSachCongNhan(dsCN, n);
				break;
			case 2:
				cout << " \t  2. In danh sach cong nhan." << endl;
				cout << "----------------------------------------------------" << endl;
				inDanhSachCongNhan(dsCN, n);
				break;
			case 3:
				cout << " \t  3. Tim cong nhan theo ma so." << endl;
				cout << "----------------------------------------------------" << endl;
				timCongNhan(dsCN, n);
				break;
			case 4:
					
				cout << " \t  4. Sap xep danh sach theo muc thu nhap tang dan." << endl;
				cout << "----------------------------------------------------" << endl;
				sapXep(dsCN, n);
				inDanhSachBangLuong(dsCN, n);
				break;
			case 0:
				break;
			default: cout << " Khong hop le! Vui long chon lai!" << endl;
			break;
		}
	}
}

void tinhLuong(CongNhan cn) {
	float Luong = 0;
	cn.Luong = cn.heSoLuong * cn.ngayCong;
}

void nhapMotCongNhan(CongNhan &cn) {
		cout << " Nhap ho ten cong nhan: ";
		cin.ignore();
		cin.getline(cn.hoTen, 50);
		
		cout << " Nhap ma so cong nhan: ";
		cin.getline(cn.maCongNhan, 10);
		
		cout << " Nhap he so luong: ";
		cin >> cn.heSoLuong;
		
		cout << " Nhap so ngay cong: ";
		cin >> cn.ngayCong;
		
		tinhLuong(cn);
}

void inMotCongNhan(CongNhan cn) {
	cout << " " << cn.hoTen;
	cout << "  \t- " << cn.maCongNhan;
	cout << "  \t- " << cn.heSoLuong;
	cout << "  \t- " << cn.ngayCong;
}

void nhapDanhSachCongNhan(CongNhan dsCN[], int n) {
	for (int i = 0; i < n; i++) {
	cout << " Cong nhan thu " << i + 1 << ":" << endl;	
		nhapMotCongNhan(dsCN[i]);
		cout << endl;
	}
}

void inDanhSachCongNhan(CongNhan dsCN[], int n) {
	cout << "  Ho ten\t\t- Ma Cong nhan\t- He so\t\t- Ngay cong" << endl;
	for (int i = 0; i < n; i++) {
		cout << i + 1 << ". ";	
		inMotCongNhan(dsCN[i]);
		cout << endl;
	}
}

void timCongNhan(CongNhan dsCN[], int n) {
	char maTim[10];
	cout << " Nhap ma so cong nhan can tim: ";
	cin.ignore(1);
	cin.getline(maTim, 10);
	
	for (int i = 0; i < n; i++) {
	char *p = strstr(dsCN[i].maCongNhan, maTim);	
		if (p) {
			inMotCongNhan(dsCN[i]);
			cout << endl;
		}
		else {
			continue;
		}
	}
}



void sapXep(CongNhan dsCN[], int n) {
	CongNhan temp;
	for (int i = 0; i < n ; i++) {
		for(int j = i + 1; j < n; j++) {
			if(dsCN[i].Luong > dsCN[j].Luong) {
				temp = dsCN[i];
				dsCN[i] = dsCN[j];
				dsCN[j] = temp;	
			}
		}
	}
}

void inBangLuongMotCongNhan(CongNhan cn){
	tinhLuong(cn);
	cout << " " << cn.hoTen;
	cout << "  \t- " << cn.maCongNhan;
	cout << "  \t- " << cn.heSoLuong;
	cout << "  \t- " << cn.ngayCong;
	cout << "  \t\t- " << cn.Luong;
}
void inDanhSachBangLuong(CongNhan dsCN[], int n) {
	cout << "  Ho ten\t\t- Ma Cong nhan\t- He so\t\t- Ngay cong\t- Muc thu nhap" << endl;
	for (int i = 0; i < n; i++) {
		cout << i + 1 << ". ";	
		inBangLuongMotCongNhan(dsCN[i]);
		cout << endl;
	}
}






