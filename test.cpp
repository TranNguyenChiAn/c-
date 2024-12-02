#include <iostream>
using namespace std;
int main () {
	int n;
	cout << " Enter the number of elements: ";
	cin >> n;
	
	int sum = 0; 
	int numbers[n];
	
	for(int i = 0; i < n; i++){
        if(i == 0) {
            cout << "Enter a " << i + 1 << "st element: ";
            cin >> numbers[i];
        } else if (i==1) {
            cout << "Enter a " << i + 1 << "nd element: ";
            cin >> numbers[i];
        } else if (i ==2 ) {
            cout << "Enter a " << i + 1 << "rd element: ";
            cin >> numbers[i];
        }else{
            cout << "Enter a " << i + 1 << "th element: ";
            cin >> numbers[i];
        }
        
		if(numbers[i] % 2 == 0) {
			sum += numbers[i];
		}
	}
	
	cout << " The sum of even numbers is: " << sum;
}

