#include <iostream>

using namespace std;


int add(int num1, int num2) {
	return num1 + num2;
}

int subtract(int num1, int num2) {
	return num1 - num2;
}

int multiply(int num1, int num2) {
	return num1 * num2;
}

//need to implement
int divide(int num1, int num2) {
	return num1 / num2; 
}


int main() {

int num1 = 50;
int num2 = 30;

cout << num1 << " + " << num2 << " = " << add(num1, num2) << endl;
cout << num1 << " - " << num2 << " = " << subtract(num1, num2) << endl;
cout << num1 << " * " << num2 << " = " << multiply(num1, num2) << endl;

return 0;
}
