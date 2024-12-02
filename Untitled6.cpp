#include <iostream>
#include <string>
using namespace std;

struct SinhVien {
	int tuoi, n ;
	int maSV;
	char hoTen[50];
    char gioiTinh[5];
    char queQuan[30];
	double diemTB;
	
	void nhapSV() {
		cout << " Nhap ma sinh vien: "; cin >> maSV;
		cout << " Nhap ho va ten sinh vien: "; fflush(stdin); gets(hoTen);
		cout << " Nhap tuoi sinh vien: "; cin >>tuoi;
		cout << " Nhap gioi tinh cua sinh vien (Nam|Nu): "; fflush(stdin); gets(gioiTinh);
		cout << " Nhap que quan cua sinh vien: "; fflush(stdin); gets(queQuan);
		cout << " Nhap diem trung binh: "; cin >> diemTB;
		cout << endl;
	}
	
	void inDanhSach() {
			cout << "  " << maSV;
			cout << "\t" << hoTen;
			cout <<"\t\t " << tuoi;
			cout <<"\t\t " << gioiTinh;
			cout <<"\t\t" << queQuan;
			cout <<"\t\t " << diemTB;
			cout << endl;	
	}
};

void sapXepDanhSach(SinhVien *sv, int n) {
		int i, j;
		int temp;
		for (int i = 0; i < n; i++) {
			for(int j = 1; i < n -1 ; j++) {
				if(sv[i].diemTB > sv[j].diemTB) {
					sv[i].diemTB = sv[j].diemTB;
					sv[j].diemTB = sv[temp].diemTB;
					sv[temp].diemTB = sv[i].diemTB;
 				}
			}
		}
	cout << endl;
	cout << " \t\t\t\t " << " DANH SACH SINH VIEN" << endl;
	cout << "-----------------------------------------------------------------------" << endl;
	cout <<" STT \tMa SV \tHo ten \t\t\tTuoi   \t\tGioi tinh \t Que quan \tDiem TB" << endl;
		for(int i = 0; i < n; i++) {
			cout << "   " << i +1 << "   " ;
			sv[i].inDanhSach();
		}
	}

void XuatSV (SinhVien *sv, int n) {
	cout << endl;
	cout << " \t\t\t\t " << " DANH SACH SINH VIEN" << endl;
	cout << "-----------------------------------------------------------------------" << endl;
	cout <<" STT \tMa SV \tHo ten \t\t\tTuoi   \t\tGioi tinh \t Que quan \tDiem TB" << endl;
		for(int i = 0; i < n; i++) {
			cout << "   " << i +1 << "   " ;
			sv[i].inDanhSach();
		}
}

int main () {
	SinhVien sv[100];
	int n, ma;
	int loi = -1;
	
    int choice;
	while(true) {
		cout << endl;
		cout << "-------------------MENU--------------------" << endl;
		cout << " 1. Nhap danh sach sinh vien. " << endl;
		cout << " 2. Xuat danh sach sinh vien." << endl;
		cout << " 3. Tim sinh vien." << endl;
		cout << " 4. Sap xep theo thu tu diem TB tang dan." << endl;
		cout << " 0. Thoat." << endl;
		cout << "-------------------------------------------" << endl;
		cout << " Nhap lua chon: "; cin >> choice;
		
		switch (choice) {
			case 1:
				cout << " Nhap so luong sinh vien: "; cin >> n; 
				for(int i = 0; i < n; i++) {
		        	cout << " Nhap sinh vien thu "<< i + 1 << endl;
		        	sv[i].nhapSV();
				}
				break;
				
			case 2:
				
				XuatSV(sv, n);
				break;
				
			case 3:
				cout << " Nhap ma sinh vien cua sinh vien can tim: "; cin >> ma;
				cout << " Thong tin sinh vien can tim: " << endl;
				for(int i = 0; i < n; i++) {
					if(ma == sv[i].maSV) {
					 sv[i].inDanhSach();
					}
				}
				return -1;
				
			case 4:
				cout << endl;
				cout << "\t DANH SACH THEO THU TU DIEM TB TANG DAN" << endl;
				sapXepDanhSach(sv, n);
				
			case 0:
				cout << " Ban da thoat khoi chuong trinh!" << endl;
				exit(0);
				break;
		}
	}
}
