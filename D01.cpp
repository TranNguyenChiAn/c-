
#include <iostream>
using namespace std;

int main() {
	int begin, end, count = 0, control = 0;

    cout << "Nhap so bat dau: ";
    cin >> begin;
    cout << "Nhap so ket thuc: ";
    cin >> end;
    cout << " Cac so nguyen to trong khoang la: ";
    for (int n = begin; n <= end; n++) { // xac dinh so nguyen can kiem tra la i
        for (int j = 2; j < n; j++) { //kiem tra i co phai la so nguyen to hay khong
            if (n % j == 0) {
                control++;
            }
        }
        if (control == 0 && n != 1) {
            count++;
            cout << n << " ";
        }
        control = 0;
    }

    cout << "\n So nguyen to trong khoang tu " << begin << " den " << end << " la: " << count <<endl;
    
    
    return 0;
}

    //Nhap mot so n, in ra day so tu 1 den n;
    /*int n;
    cout << "Nhap n: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cout << i << endl;
    }*/

    //tong 10 so tu nhien dau tien: 1 2 3 4 5 6 7 8 9 10
    /*int sum = 0;
    for (int i = 1; i <= 10; i++) {
        sum = sum + i;
    }
    cout << sum;*/

    /*3. Vi?t ch??ng trình b?ng C ++ ?? ki?m tra m?t s? có ph?i là s? nguyên t? 
    hay không.*/
    //int n;
    //cout << "Nhap n: ";
    //cin >> n;
    //bool flag = true; //la so nguyen to
    //if (n < 2) {
    //    flag = false;
    //}
    //else {
    //    for (int i = 2; i < n; i++) {
    //        if (n % i == 0) {
    //            flag = false;
    //            break;
    //        }
    //    }
    //}
    //
    //if (flag == true) {
    //    cout << "Day la so nguyen to.";
    //}
    //else {
    //    cout << "Day khong phai la so nguyen to.";
    //}

    /*4. Vi?t ch??ng trình b?ng C ++ ?? tìm s? nguyên t? trong m?t ph?m vi.*/
    
    /*
    int begin, end, count = 0, control = 0;

    cout << "Nhap so bat dau: ";
    cin >> begin;
    cout << "Nhap so ket thuc: ";
    cin >> end;
    for (int n = begin; n <= end; n++) { // xac dinh so nguyen can kiem tra la i
        for (int j = 2; j < n; j++) { //kiem tra i co phai la so nguyen to hay khong
            if (n % j == 0) {
                control++;
            }
        }
        if (control == 0 && n != 1) {
            count++;
            cout << n << " ";
        }
        control = 0;
    }

    cout << "\nSo nguyen to trong khoang tu " << begin << " den " << end << " la: " << count;
    return 0;
}
*/

