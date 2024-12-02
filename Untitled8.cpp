#include <iostream>
#include <string>
using namespace std;

int main() {
	int s = 0, i = 0;
	while(i < 10) {
		s += i;
		i++;
	}
	cout << s;
}
