#include <iostream> 
using namespace std; 
  
int main() { 
    int a, b, c, d, max, min;
    
    cout << "Nhap 4 so vao ban phim: ";
    cin >> a >> b >> c >> d;
    
	max = a; 
		if(max < b) {
			max = b;
		}
		
		if(max < c) {
			max = c;
		} 
		
		if(max < d) {
			max = d;
		} 
		
		cout << "\t Gia tri lon nhat cua bon so la: "<< max << endl ;
   
   	min = a;
   		if(min > b) {
			min = b;
		}
		
		if(min > c) {
			min = c;
		} 
		
		if(min > d) {
			min = d;
		} 
   		
    cout << "\t Gia tri nho nhat cua bon so la: "<< min << endl;
   
   return 0; 
}
	
	

