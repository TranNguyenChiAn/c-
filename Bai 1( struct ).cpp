#include <iostream>
#include <stdio.h>
#include <cstring>
using namespace std;

struct NhanVien {
	int maNV;
	double luong;
	char hoTen[100];
	char noiSinh[100];
	char diaChi[100];
	char ngaySinh[50];
	char ngayCongTac[50];
};

void menu(NhanVien dsNV[], int& n);
void nhapMotNhanVien(NhanVien& nv);
void inMotNhanVien(NhanVien nv);
void nhapDanhSachNhanSu(NhanVien dsNV[], int n);
void inDanhSachNhanSu(NhanVien dsNV[], int n);
void timNhanVienTheoMaSo(NhanVien dsNV[], int n);
void timNhanVienTheoTen(NhanVien dsNV[], int n);
void inBangLuong(NhanVien dsNV[], int n);
int xoaNhanVienTheoMaSo(NhanVien dsNV[], int n);


int main () {
	NhanVien dsNV[1000];
	int n;
	menu(dsNV, n);
	return 0;
}

void menu(NhanVien dsNV[], int& n) {
	int choice;
	int soLuongNV = 0;
	while (true) {
		cout << endl;
		cout << "\t |-----------------MENU--------------------|" << endl;
		cout << "\t | 1. Them mot nhan vien.                  |" << endl;
		cout << "\t | 2. Xem danh sach nhan su.               |" << endl;
		cout << "\t | 3. Tim nhan vien theo ma so.            |" << endl;
		cout << "\t | 4. Tim mot nhan vien theo ten.          |" << endl;
		cout << "\t | 5. In bang luong theo thu tu giam dan.  |" << endl;
		cout << "\t | 6. Xoa mot nhan vien.                   |" << endl;
		cout << "\t | 0. Thoat.                               |" << endl;
		cout << "\t |-----------------------------------------|" << endl;
		cout << endl;
		cout << " Nhap lua chon: "; cin >> choice;
		switch (choice) {
		case 1:
			cout << "   1. Them mot nhan vien" << endl;
			cout << "\nNhap so luong nhan vien: ";
            cin >> n;
			nhapDanhSachNhanSu(dsNV, n);
			cout << " Them nhan vien thanh cong!" << endl;
			
			break;
		case 2:
			cout << "   2. Xem danh sach nhan su" << endl;
			inDanhSachNhanSu(dsNV, n);
			break;
		case 3:
			cout << "   3. Tim nhan vien theo ma so" << endl;
			timNhanVienTheoMaSo(dsNV, n);
			break;
		case 4:
			cout << "   4. Tim mot nhan vien theo ten." << endl;
			timNhanVienTheoTen(dsNV, n);
			break;
		case 5:
			inBangLuong(dsNV, n);			
			cout << "   5. In bang luong theo thu tu giam dan." << endl;
			inDanhSachNhanSu(dsNV, n);
			break;
		case 6:
			cout << "   6. Xoa mot nhan vien" << endl;
			xoaNhanVienTheoMaSo(dsNV, n);
			soLuongNV--;
			break;
		case 0:
			cout << " Ban da thoat khoi chuong trinh " << endl;
			exit(0);
			break;
		default:
			cout << " Lua chon khong hop le. Vui long chon lai!" << endl;
			break;
		}

	}
}

void nhapMotNhanVien(NhanVien& nv)
{
	int n;
	cout << " Nhap ma so nhan vien: "; 
	cin >> nv.maNV;
	
	cout << " Nhap ho va ten nhan vien: ";
	cin.ignore();
	cin.getline(nv.hoTen, 100);

	cout << " Nhap noi sinh nhan vien: ";
	cin.getline(nv.noiSinh, 100);

	cout << " Nhap dia chi nhan vien: ";
	cin.getline(nv.diaChi, 100);

	cout << " Nhap ngay sinh nhan vien: ";
	cin.getline(nv.ngaySinh, 50);

	cout << " Nhap ngay cong tac cua nhan vien: ";
	cin.getline(nv.ngayCongTac, 50);
	
	cout << " Nhap luong cua nhan vien (trieu dong): ";
	cin >> nv.luong;
}

void inMotNhanVien(NhanVien nv)
{
	cout << "\tMa so nhan vien: " << nv.maNV << endl;
	cout << "\tHo Ten: " << nv.hoTen << endl;
	cout << "\tNoi sinh: " << nv.noiSinh << endl;
	cout << "\tDia chi: " << nv.diaChi << endl;
	cout << "\tNgay sinh: " << nv.ngaySinh << endl;
	cout << "\tNgay cong tac: " << nv.ngayCongTac << endl;
	cout << "\tLuong(trieu dong): " << nv.luong << endl;
}


void nhapDanhSachNhanSu(NhanVien dsNV[], int n)
{
	for (int i = 0; i < n; i++) {
		cout << "\nNhap nhan vien thu " << i + 1 << endl;
		nhapMotNhanVien(dsNV[i]);
	}
}

void inDanhSachNhanSu(NhanVien dsNV[], int n)
{
	for (int i = 0; i < n; i++) {
		cout << "\nNhan vien thu " << i + 1 << endl;
		inMotNhanVien(dsNV[i]);
	}
}

void timNhanVienTheoMaSo(NhanVien dsNV[], int n)
{	
	int maTim;
	cout << " Nhap ma nhan vien: "; 
	cin >> maTim;
	for (int i = 0; i < n; i++) {
		if (maTim == dsNV[i].maNV) {
			inMotNhanVien(dsNV[i]);
		}
	}
}

void timNhanVienTheoTen(NhanVien dsNV[], int n)
{
	char nhapTen[100];
	cout << " Nhap ten: ";
	cin.ignore(1);
	cin.getline(nhapTen, 100);
	
	for (int i = 0; i < n; i++) {
	char *p = strstr(dsNV[i].hoTen, nhapTen);	
		if (p) {
			inMotNhanVien(dsNV[i]);
			cout << endl;
		}
		else {
			continue;
		}
	}
}

void swap (NhanVien& nv1, NhanVien& nv2) {
    NhanVien temp = nv1;
    nv1 = nv2;
    nv2 = temp;
}

void inBangLuong(NhanVien dsNV[], int n)
{
	for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (dsNV[i].luong < dsNV[j].luong) {
                swap(dsNV[i], dsNV[j]);
            }
        }
    }
}

int xoaNhanVienTheoMaSo(NhanVien dsNV[], int n)
{
	int maSo;
	int found = 0;
	cout << " Nhap ma so nhan vien muon xoa: ";
	cin >> maSo;
	for (int i = 0; i < n; i++) {
		if (dsNV[i].maNV == maSo) {
			found = 1;
			for (int j = i; j < n; j++) {
				dsNV[j] = dsNV[j + 1];
			}
			cout << "\n Da xoa nhan vien co ma so = " << maSo << endl;
			break;
		}
	}
	if (found == 0) {
		cout << "\n Nhan vien co ma so = " << maSo << " khong ton tai.";
		return 0;
	}
	else {
		return 1;
	}
	return 0;
}

