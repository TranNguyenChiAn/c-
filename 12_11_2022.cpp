#include <iostream>
#include <string>
using namespace std;

/*
struct PhanSo {
	int tuSo = 1;
	int mauSo;
	
	void printPS() {
		cout << tuSo  << "/" << mauSo ;
	}
	
	double result() {
		return (double)tuSo/mauSo;
	}
	
};
*/

struct SinhVien {
	int tuoi, n ;
	int dem = 0;
	char hoTen[50];
    char gioiTinh[5];
    char queQuan[30];
	double diemTB;
	
	void nhapSV() {
		cout << " Nhap ho va ten sinh vien: "; fflush(stdin); gets(hoTen);
		cout << " Nhap tuoi sinh vien: "; cin >>tuoi;
		cout << " Nhap gioi tinh cua sinh vien (Nam|Nu): "; fflush(stdin); gets(gioiTinh);
		cout << " Nhap que quan cua sinh vien: "; fflush(stdin); gets(queQuan);
		cout << " Nhap diem trung binh: "; cin >> diemTB;
		cout << endl;
	}
	
	void inDanhSach() {
			cout << " " << hoTen;
			cout <<"\t\t " << tuoi;
			cout <<"\t\t " << gioiTinh;
			cout <<"\t\t" << queQuan;
			cout <<"\t\t " << diemTB;
			cout << endl;	
	}
};

void XuatSV (SinhVien *sv, int n) {
	cout << " \t\t " << " DANH SACH SINH VIEN" << endl;
	cout <<" STT \tHo ten \t\t\tTuoi   \t\tGioi tinh \t Que quan \tDiem TB" << endl;
		for(int i = 0; i < n; i++) {
			cout << "   " << i +1 << "   " ;
			sv[i].inDanhSach();
		}
}

int main () {
	SinhVien sv[100];
	int n;
    cout << "Nhap so sinh vien can them: "; cin >> n;
    cout << "\n 1. Them sinh vien." << endl;
    	for(int i = 0; i < n; i++) {
        	cout << " Nhap sinh vien thu "<< i + 1 << endl;
        	sv[i].nhapSV();
		}
	
	cout << endl;
	XuatSV(sv, n);
}
	
	/*Chuoi ki tu
	string str;
	cout << " Nhap ho ten: ";
	getline(cin, str);
	cout << str;
	
	 XAU KI TU
	char str[100];
	cout << " Nhap chuoi: ";
	cin.getline(str, 100);
	cout << str;       
	
	
	
	/*
	PhanSo ps[100];
	int n;
	cout << " Nhap n: ";
	cin >> n;
	
	for(int i = 0; i <n; i++) {
		ps[i].mauSo = i + 1;
	}
	
	cout << " Danh sach phan so: " << endl;
	double tong = 0;
	
	for(int i = 0; i < n; i++) {
		ps[i].printPS();
		if(i!=n - 1) {
			cout << " + ";
		}
		tong += ps[i].result();
	}
	cout << endl << " Tong = " << tong;
	*/
	


/*

struct Point {
	int x;
	int y;
	
	void init(int a, int b) {
		x = a;
		y = b;
	}
	
	void printPoint () {
	cout << "point (" << x << ", " << y << ")" <<endl;
}

};
	
int main () 
{
	Point p;
	p.init(2, 3);
	p.printPoint();
	
	Point p1;
	p1.init(5, 10);
	p1.printPoint();
	
	return 0;
	
}
*/
