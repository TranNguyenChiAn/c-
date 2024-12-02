#include <iostream> 
using namespace std;

int main() {
	int n;
	cout << " Nhap n: ";
	cin >> n;
	
	cout << " In cac so tu 1 den n: " << endl;
	for(int i = 1; i <= n; i++) {
		cout << i << " ";
	}
	
	cout << endl;
	cout << " Tong cac so tu 1 den n la: ";
	int sum = 0;
	for(int i = 1; i<=n; i++) {
		sum += i;
	}
	cout << sum;
}
