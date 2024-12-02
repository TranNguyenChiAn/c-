#include <iostream> 
using namespace std;


int addition(int value1, int value2) {
	int sumary = value1 + value2;
	return sumary;
}

void introduce() {
	cout << "Hello!" << endl;
	cout << "I'm a program" << endl;
}

int main() {
	introduce();
	int value1 = 5;
	int value2 = 7;
	int sum = addition(value1, value2);

	cout << value1 << " + " << value2 << " = " << sum << endl;
	
	return 0;
}

