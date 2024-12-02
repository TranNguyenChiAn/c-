#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;

void test (int& x) {
	x++;
	cout << x << endl; 
} 

int main () {
	int a[] = {1, 2, 3, 4, 5, 6};
	int n = sizeof(a)/sizeof(int);
	
	cout << a << endl;
	cout << &a << endl;
	cout << &a[0] << endl;
	
	cout << *(&a[0]) << endl;
	int *ptr = &a[0];
	cout << *ptr << endl;
	ptr++;
	cout << *(ptr) << endl;
	cout << endl;
	
	
	cout << " In mang: " << endl; //Cach 1
	cout << " ";
	for(int i = 0; i < 6; i++) {
		int *ptr1 = &a[i];
		cout << *ptr1 << " " ;
	}
	
	cout << endl << endl; 
	cout << " In mang: " << endl;   //Cach 2
	cout << " ";
	int *ptr2 = &a[0];
	for (int *ptr2 = &a[0]; ptr < &a[n]; ptr++) {
		cout << *ptr2 << " ";	
		ptr2++;
	}
	
	cout << endl << endl; 
	cout << " In mang: " << endl;   // Cach 3
	cout << " ";
	for(int i = 0; i < n; i++) {
		cout << *(a + i) << " ";
	}
	
	cout << endl << endl; 
	cout << " In mang: " << endl;   // Cach 4
	cout << " ";
	int *ptr3 = a;
	for(int i = 0; i < n; i++) {
		cout << *(ptr3 + i) << " ";
	}  
	
	cout << endl << endl; 
	cout << " In mang: " << endl;   // Cach 5
	cout << " ";
	int *ptr4 = a;
	for(int *ptr4 = &a[0]; ptr4 < &a[n]; ptr4++) {
		cout << *ptr4 << " ";
	} 
	
	return 0;
	

	
	/*
		int* ptr; // khai bao mot bien con tro
	int a = 19;
	ptr = &a;
	cout << " Dia chi cua bien a: " << &a << endl;
	cout << " Dia chi cua con tro ptr: " << ptr << endl;
	cout << typeid(ptr).name() << endl;
	cout << typeid(a).name() << endl;
	cout << typeid(&a).name() << endl;
	return 0;
	*/
	
	/*
		int a = 10;
	int b = 20;
	int *ptr1 = &a;
	int *ptr2 = &b;
	cout << " Gia tri cua con tro 1: " << ptr1 << endl;
	cout << " Dia chi cua a: " << &a << endl;
	cout << " Dia chi cua b: " << &b << endl;
	cout << " Gia tri cua con tro 2: " << ptr2 << endl;
	*/
	
	/*
	int a = 10;
	int *ptr = &a;
	int *ptr2 = ptr;
	cout << ptr << endl;
	ptr++;
	cout << " Gia tri cua con tro sau khi tang: " << ptr << endl;
		cout << " Gia tri cua con tro sau khi tang: " << ptr2 << endl;
		*/


} 



/*
int *ptr;
int a = 19;
	ptr = &a;
	cout << sizeof(char*) << endl;
	cout << sizeof(int*) << endl;
	cout << sizeof(double*) << endl;
	cout << sizeof(string*) << endl;
*/


/*	Toan tu tro den
	int x = 12;
	cout << " Gia tri cua x: " << x << endl;
	cout << " Dia chi cua x: " << &x << endl;
	cout << " Gia tri cua x: " << *(&x) << endl;
	x = 20;
	cout << " Dia chi cua x: " << &x << endl;
	cout << " Gia tri cua x: " << *(&x) << endl;
	cout << *(&x);
	return 0;
	
*/

/*
int main () {
	int y = 15;
 	*ref = y;
	cout << *ref << endl;
	cout << y << endl;
	return 0;
} 


	- Con tro la mot bien duoc dung de luu tru dia chi cua bien khac
	- Khac voi tham chieu, con tro la mot bien co dia chi do lap so voi vung nho ma no tro toi, nhung gia tri ben trong 
	vung nho cua con tro chinh la dia chi cua bien (dia chi ao) ma no tro toi
*/
