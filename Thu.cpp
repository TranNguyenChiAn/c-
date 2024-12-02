#include <iostream>
using namespace std;

void change(int &x, int &y, int &z ) {
	y = --x; --y;
	z = ++y + --x;	

}

void display(int result) {
	cout << result;
}

int main() {
	  int x = 3;
   while(x > 0) {
     cout << x << ",";
     x--;
   }
    return 0;
}
