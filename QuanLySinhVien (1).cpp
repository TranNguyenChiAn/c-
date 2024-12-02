#include <iostream>
using namespace std;

struct SinhVien {
    int maSV;
    char hoTenSV[50];
    int tuoiSV;
    char gioiTinh[5];
    char queQuan[300];
    float diemTB;
};

void nhapMotSinhVien(SinhVien& sv);
void inMotSinhVien(SinhVien sv);
void nhapDanhSachSinhVien(SinhVien dsSinhVien[], int n);
void inDanhSachSinhVien(SinhVien dsSinhVien[], int n);
void menu(SinhVien dsSinhVien[], int& n);

int timKiemSinhVien(SinhVien dsSinhVien[], int n, int key);
void swap(SinhVien& sv1, SinhVien& sv2);
void sapXepTangDan(SinhVien dsSinhVien[], int n);

int main()
{
    SinhVien dsSinhVien[50];
    int n;
    menu(dsSinhVien, n);
    return 0;
}

void menu(SinhVien dsSinhVien[], int& n) {
    int choice;
    while (true) {
        cout << "************ MENU *************\n";
        cout << "** 1. Nhap danh sach sinh vien \n";
        cout << "** 2. Xuat danh sach sinh vien \n";
        cout << "** 3. Tim kiem sinh vien \n";
        cout << "** 4. Sap xep theo chieu tang dan \n";
        cout << "** 0. Thoat.\n";
        cout << "Nhap lua chon: ";
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
            int key;
            cout << "\nNhap ma sinh vien can tim kiem: ";
            cin >> key;
            if (timKiemSinhVien(dsSinhVien, n, key) == -1) {
                cout << "\nKhong ton tai sinh vien can tim!";
            }
            else {
                cout << "\nVi tri sinh vien can tim la " << timKiemSinhVien(dsSinhVien, n, key) << endl;
            }
            break;
        case 4:
            sapXepTangDan(dsSinhVien, n);
            cout << "\nDanh sach sau khi sap xep \n";
            inDanhSachSinhVien(dsSinhVien, n);
            break;
        case 0:
            cout << "\nBan da thoat khoi chuong trinh.";
            exit(0);
            break;
        }
    }
}

void nhapMotSinhVien(SinhVien& sv) {
    cout << "\nNhap ma sinh vien: ";
    cin >> sv.maSV;
    cin.ignore();

    cout << "\nNhap ho ten: ";
    cin.getline(sv.hoTenSV, 50 );

    cout << "\nNhap tuoi sinh vien: ";
    cin >> sv.tuoiSV;

    cout << "\nNhap gioi tinh: ";
    cin.ignore();
    cin.getline(sv.gioiTinh, 5);

    cout << "\nNhap que quan: ";
    cin.getline(sv.queQuan, 300 );

    cout << "\nDiem trung binh: ";
    cin >> sv.diemTB;

}

void inMotSinhVien(SinhVien sv) {
    cout << "\tMa Sinh vien: " << sv.maSV << endl;
    cout << "\tHo Ten: " << sv.hoTenSV << endl;
    cout << "\tTuoi: " << sv.tuoiSV << endl;
    cout << "\tGioi Tinh: " << sv.gioiTinh << endl;
    cout << "\tQue quan: " << sv.queQuan << endl;
    cout << "\tDiem TB: " << sv.diemTB << endl;
}

void nhapDanhSachSinhVien(SinhVien dsSinhVien[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "\nNhap sinh vien thu " << i + 1 << endl;
        nhapMotSinhVien(dsSinhVien[i]);
    }
}

void inDanhSachSinhVien(SinhVien dsSinhVien[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "\nSinh vien thu " << i + 1 << endl;
        inMotSinhVien(dsSinhVien[i]);
    }
}

int timKiemSinhVien(SinhVien dsSinhVien[], int n , int key) {

    for (int i = 0; i < n; i++) {
        if (dsSinhVien[i].maSV == key) {
            return i;
        }
    }

    return -1;
}

void swap(SinhVien& sv1, SinhVien& sv2) {
    SinhVien temp = sv1;
    sv1 = sv2;
    sv2 = temp;
}
void sapXepTangDan(SinhVien dsSinhVien[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (dsSinhVien[i].diemTB > dsSinhVien[j].diemTB) {
                swap(dsSinhVien[i], dsSinhVien[j]);
            }
        }
    }
}
