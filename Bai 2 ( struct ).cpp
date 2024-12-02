#include <iostream>
#include<stdio.h>
#include <cstring>
using namespace std;

struct SinhVien {
    int maSV;
    char hoTenSV[50];
    char gioiTinh[5];
    int tuoiSV;
    float diemToan;
    float diemHoa;
    float diemLy;
    float diemTB;
    char hocluc[20];
};

void menu(SinhVien dsSinhVien[], int& n);

void nhapMotSinhVien(SinhVien& sv);
void inMotSinhVien(SinhVien sv);
void nhapDanhSachSinhVien(SinhVien dsSinhVien[], int n);
void inDanhSachSinhVien(SinhVien dsSinhVien[], int n);

void tinhDiemTB(SinhVien& sv);
void sapXepTangDan(SinhVien dsSinhVien[], int n);

void inDiemTBMotSinhVien(SinhVien sv);
void inDanhSachDiemTB(SinhVien dsSinhVien[], int n);

void xepLoaiSinhVien(SinhVien& sv);
void danhSachXepLoai(SinhVien dsSinhVien[], int n);


int main()
{
    SinhVien dsSinhVien[50];
    int n;
    char fileName[] = "sinhvien.txt";
    menu(dsSinhVien, n);
    return 0;
}

void menu(SinhVien dsSinhVien[], int& n) {
    int choice;
    while (true) {
        cout << "\t |-----------------MENU--------------------|" << endl;
        cout << "\t | 1. Them sinh vien.                      |" << endl;
        cout << "\t | 2. Xem danh sach sinh vien.             |" << endl;
        cout << "\t | 3. Danh sach diem TB cua sinh vien.     |" << endl;
        cout << "\t | 4. Sap xep theo thu tu tang dan.        |" << endl;
        cout << "\t | 5. Xep loai sinh vien.                  |" << endl;
        cout << "\t | 6. Xuat danh sach sinh vien ra file.    |" << endl;
        cout << "\t | 0. Thoat.                               |" << endl;
        cout << "\t |-----------------------------------------|" << endl;
        cout << endl;

        cout << " Nhap lua chon: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "\nNhap danh sach sinh vien: \n";
            cout << "\nNhap so luong sinh vien: ";
            cin >> n;
            nhapDanhSachSinhVien(dsSinhVien, n);
            break;
        case 2:
            inDanhSachSinhVien(dsSinhVien, n);
            break;
        case 3:
            cout << " Danh sach sinh vien sau khi sap xep" << endl;
            inDanhSachDiemTB(dsSinhVien, n);
            break;
        case 4:
            sapXepTangDan(dsSinhVien, n);
            cout << "\nDanh sach sau khi sap xep \n" << endl;
            inDanhSachSinhVien(dsSinhVien, n);
            break;
        case 5:
            danhSachXepLoai(dsSinhVien, n);
            break;
        case 0:
            cout << "\nBan da thoat khoi chuong trinh.";
            exit(0);
            break;
        }
    }
}

void tinhDiemTB(SinhVien &sv) {
	int diemTB = 0;
	sv.diemTB = (sv.diemToan + sv.diemLy + sv.diemHoa) / 3;
}

void nhapMotSinhVien(SinhVien& sv) {
    cout << "\nNhap ma sinh vien: ";
    cin >> sv.maSV;
    cin.ignore();
    cout << "\nNhap ho ten: ";
    cin.getline(sv.hoTenSV, 50);
    cout << "\nNhap gioi tinh: ";
    cin.getline(sv.gioiTinh, 5);
    cout << "\nNhap tuoi sinh vien: ";
    cin >> sv.tuoiSV;
    cout << " \n Nhap diem toan cua sinh vien: ";
    cin >> sv.diemToan;
    cout << " \n Nhap diem ly cua sinh vien: ";
    cin >> sv.diemLy;
    cout << " \n Nhap diem hoa cua sinh vien: ";
    cin >> sv.diemHoa;
    tinhDiemTB(sv);
}

void inMotSinhVien(SinhVien sv) {
    cout << "\tMa Sinh vien: " << sv.maSV << endl;
    cout << "\tHo Ten: " << sv.hoTenSV << endl;
    cout << "\tTuoi: " << sv.tuoiSV << endl;
    cout << "\tGioi Tinh: " << sv.gioiTinh << endl;
    cout << "\tDiem toan: " << sv.diemToan << endl;
    cout << "\tDiem ly: " << sv.diemLy << endl;
    cout << "\tDiem hoa: " << sv.diemHoa << endl;
    cout << "\tDiem trung binh: " << sv.diemTB << endl;
}

void nhapDanhSachSinhVien(SinhVien dsSinhVien[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "\nNhap sinh vien thu " << i + 1 << endl;
        nhapMotSinhVien(dsSinhVien[i]);
        xepLoaiSinhVien(dsSinhVien[i]);
    }
}

void inDanhSachSinhVien(SinhVien dsSinhVien[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "\nSinh vien thu " << i + 1 << endl;
        inMotSinhVien(dsSinhVien[i]);
    }
}


void inDiemTBMotSinhVien(SinhVien sv){
	cout << " " << sv.maSV;
	cout << " \t " << sv.hoTenSV;
	cout << " \t " << sv.diemTB;
}
void inDanhSachDiemTB(SinhVien dsSinhVien[], int n){
	cout << " Ma Sv \t Ho ten \t Diem Tb" << endl;
	for (int i = 0; i < n; i++) {
        inDiemTBMotSinhVien(dsSinhVien[i]);
        cout << endl;
    }
}

void sapXepTangDan(SinhVien dsSinhVien[], int n) {
    SinhVien tmp;
    for(int i = 0;i < n;i++) {
        for(int j = i+1; j < n;j++) {
            if(dsSinhVien[i].diemTB > dsSinhVien[j].diemTB) {
                tmp = dsSinhVien[i];
                dsSinhVien[i] = dsSinhVien[j];
                dsSinhVien[j] = tmp;
            }
        }
    }
}

void xepLoaiSinhVien(SinhVien& sv)
{
    if(sv.diemTB >= 9 && sv.diemTB <= 10) {
        strcpy(sv.hocluc,"Xuat sac") ;
    }
    else if (sv.diemTB >= 8 && sv.diemTB < 9) {
        strcpy(sv.hocluc,"Gioi") ;
    }
    else if (sv.diemTB >= 6.5 && sv.diemTB < 8  ) {
        strcpy(sv.hocluc,"Kha") ;
    }
    else if (sv.diemTB >= 5 && sv.diemTB < 6.5 ) {
        strcpy(sv.hocluc,"Trung binh") ;
    }
    else {
        strcpy(sv.hocluc,"Yeu") ;
    }

}

void inXepLoaiMotSinhVien(SinhVien sv){
	cout << " " << sv.maSV;
	cout << " \t " << sv.hoTenSV;
	cout << " \t " << sv.diemTB;
	cout << " \t\t " << sv.hocluc;
	cout << endl;
}


void danhSachXepLoai(SinhVien dsSinhVien[], int n)
{
    cout << " Ma SV \t Ho ten Sv \t Diem TB \t\t Xep loai" << endl;
    for (int i = 0; i < n; i++) {
        inXepLoaiMotSinhVien(dsSinhVien[i]);
        cout << endl;
    }
}




