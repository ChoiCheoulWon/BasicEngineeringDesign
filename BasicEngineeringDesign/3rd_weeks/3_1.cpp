/*
1차 방정식 풀기

y = ax + b;
y = cx + d;

(a-c)x + (b-d) = 0
x = (d-b)/(a-c)
y = a*x+b;

*/

#include <iostream>

using namespace std;

double cal_x(double, double, double, double);
double cal_y(double, double, double, double);

int main() {
	double a, b, c, d;

	cout << "1st equation: y = ax + b, input 'a' and 'b'" << endl;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;

	cout << "2nd equation: y = cx + d, input 'c' and 'd'" << endl;
	cout << "c = "; cin >> c;
	cout << "d = "; cin >> d;

	cout << "x is " << cal_x(a, b, c, d) << endl;
	cout << "y is " << cal_y(a, b, c, d) << endl;
	
	return 0;
}

double cal_x(double a, double b, double c, double d) {

	return (d - b) / (a - c);

}

double cal_y(double a, double b, double c, double d) {

	return a * cal_x(a, b, c, d) + b;

}