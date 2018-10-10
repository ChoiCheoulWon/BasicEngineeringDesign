/*
cmath , math.h library ½áº¸±â
*/

#include <iostream>
#include <cmath>

using namespace std;

double pytha(double, double);
void printOne(double);

int main() {
	double a, b;
	
	cout << "** Input two number **" << endl;
	cout << "Number_1 : "; cin >> a;
	cout << "Number_2 : "; cin >> b;

	cout << fixed;
	cout.precision(2);
	printOne(pytha(a, b));

	return 0;
}

double pytha(double a, double b) {
	return sqrt(a*a + b * b);
}
void printOne(double c) {
	cout << "Result is " << c << endl;
}