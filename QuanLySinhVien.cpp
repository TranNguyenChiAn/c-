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
/*Tìm kiếm sinh viên theo mã sinh viên (Mã nhập từ bàn phím):
* 1. Nếu tìm thấy thì trả về chỉ số (vị trí) của sinh viên đó trong ds
* 2. Nếu không tìm thấy thì trả về giá trị -1
*/

/*
* Sắp xếp danh sách theo thứ tự điểm trung bình tăng dần.
*/


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
    cin.getline(sv.hoTenSV, 50);

    cout << "\nNhap tuoi sinh vien: ";
    cin >> sv.tuoiSV;

    cout << "\nNhap gioi tinh: ";
    cin.ignore();
    cin.getline(sv.gioiTinh, 5);

    cout << "\nNhap que quan: ";
    cin.getline(sv.queQuan, 300);

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
