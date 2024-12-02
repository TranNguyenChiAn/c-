#include <iostream>
#include <string>
#include <stdio.h>
#include <iomanip>
using namespace std;
/*Khai báo cấu trúc của kiểu dữ liệu SinhVien*/
struct SinhVien {
    int id = 0;
    string hoTen;
    float toan = 0.0;
    float ly = 0.0;
    float hoa = 0.0;
};

/*Khai báo nguyên mẫu hàm - Prototype function*/

void nhapMotSinhVien(SinhVien& sv);
void inMotSinhVien(SinhVien sv);
void nhapDSSinhVien(SinhVien dsSinhVien[], int& n);
void inDSSinhVien(SinhVien dsSinhVien[], int n);
void dsDiemTBCaoNhat(SinhVien dsSinhVien[], int n);
void dsDiemToanCaoNhat(SinhVien dsSinhVien[], int n);
float diemTB(SinhVien sv);
string hocLuc(SinhVien sv);
void menu();

int main()
{
    menu();
    return 0;
}


void menu() {
    int choice;
    SinhVien dsSinhVien[100];
    int n = 0;

    while (true) {
        cout << "\n************** MENU **************\n";
        cout << "\n** 1. Nhap danh sach sinh vien.\n";
        cout << "\n** 2. In danh sach sinh vien.\n";
        cout << "\n** 3. DS Sinh vien co diem TB cao nhat. \n";
        cout << "\n** 4. DS Sinh vien co diem Toan cao nhat. \n";
        cout << "\n** 0. Thoat. \n";
        cout << "\nMoi ban nhap lua chon: ";
        cin >> choice;
        cin.ignore();
        switch (choice)
        {
            case 1:
                nhapDSSinhVien(dsSinhVien, n);
                break;
            case 2:
                if (n > 0) {
                    inDSSinhVien(dsSinhVien, n);
                }
                else {
                    cout << "\nDanh sach sinh vien rong! \n";
                }
                
                break;
            case 3:
                dsDiemTBCaoNhat(dsSinhVien, n);
                break;
            case 4:
                dsDiemToanCaoNhat(dsSinhVien, n);
                break;
            case 0:
                exit(0);
                break;
        }
    }
}
float diemTB(SinhVien sv) {
    return (sv.toan + sv.ly + sv.hoa) / 3;
}

string hocLuc(SinhVien sv) {
    string hocLuc;
    if (diemTB(sv) > 8) {
        hocLuc = "Gioi";
    }
    else if (6.5 < diemTB(sv) && diemTB(sv) <= 8) {
        hocLuc = "Kha";
    }
    else if (5 <= diemTB(sv) && diemTB(sv) <= 6.5) {
        hocLuc = "Trung Binh";
    }
    return hocLuc;
}


void nhapMotSinhVien(SinhVien& sv) {
    cout << "\nNhap ma sinh vien: ";
    cin >> sv.id;
    cin.ignore();
    cout << "\nNhap ho ten sinh vien: ";
    getline(cin, sv.hoTen);
    cout << "\nNhap diem Toan: ";
    cin >> sv.toan;
    cout << "\nNhap diem Ly: ";
    cin >> sv.ly;
    cout << "\nNhap diem Hoa: ";
    cin >> sv.hoa;
    cin.ignore();
}

void inMotSinhVien(SinhVien sv) {
    //id | Ho Ten | Toan | Ly | Hoa | Diem Trung Binh | Hoc Luc
    cout << sv.id << setw(20) << sv.hoTen << setw(20) << sv.toan << setw(20) << sv.ly << setw(20) << sv.hoa << setw(20) << diemTB(sv) << setw(20) << hocLuc(sv) << endl;
}

void nhapDSSinhVien(SinhVien dsSinhVien[], int& n) {
    cout << "\nNhap so luong sinh vien: ";
    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; i++) {
        cout << "\nNhap sinh vien thu " << i + 1 << endl;
        nhapMotSinhVien(dsSinhVien[i]);
    }
}

void inDSSinhVien(SinhVien dsSinhVien[], int n) {
    cout << "\nID " << setw(20) << "Ho Ten" << setw(20) << "Toan" << setw(20) << "Ly" << setw(20) << "Hoa" << setw(20) << "Diem Trung Binh" << setw(20) << "Hoc Ly" << endl;
    for (int i = 0; i < n; i++) {
        inMotSinhVien(dsSinhVien[i]);
    }
}



void dsDiemTBCaoNhat(SinhVien dsSinhVien[], int n) {
    SinhVien dsDTBCaoNhat[100];
    int index = 0;
    float max = diemTB(dsSinhVien[0]);
    //Tìm điểm trung bình lớn nhất
    for (int i = 1; i < n; i++) {
        if (max < diemTB(dsSinhVien[i])) {
            max = diemTB(dsSinhVien[i]);
        }
    }
    //Thêm những sinh viên có điểm trung bình lớn nhất vào danh sách dsDTBCaoNhat[]
    for (int i = 0; i < n; i++) {
        if (max == diemTB(dsSinhVien[i])) {
            dsDTBCaoNhat[index] = dsSinhVien[i];
            index++;
        }
    }
    inDSSinhVien(dsDTBCaoNhat, index);
}
void dsDiemToanCaoNhat(SinhVien dsSinhVien[], int n) {
    SinhVien dsDiemToanCaoNhat[100];
    int index = 0;
    float max = dsSinhVien[0].toan;
    //Tìm điểm toán lớn nhất
    for (int i = 1; i < n; i++) {
        if (max < dsSinhVien[i].toan) {
            max = dsSinhVien[i].toan;
        }
    }
    //Thêm những sinh viên có điểm toán lớn nhất vào danh sách dsDiemToanCaoNhat[]
    for (int i = 0; i < n; i++) {
        if (max == dsSinhVien[i].toan) {
            dsDiemToanCaoNhat[index] = dsSinhVien[i];
            index++;
        }
    }
    inDSSinhVien(dsDiemToanCaoNhat, index);
} 
