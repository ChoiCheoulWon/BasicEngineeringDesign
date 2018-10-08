/*
평균&편차 구하기

사용자에게서 4개의 정수를 받아서 평균을 구하고, 각각 평균에 대해 편차를 구하는 프로그램

평균,편차는 함수를 통해 구현
*/

#include <iostream>

using namespace std;

double cal_avr(int, int, int, int);
double cal_dev(double, int);

int main() {
	int a, b, c, d;
	double avr;
	cout << "Enter the first number : "; cin >> a;
	cout << "Enter the second number : "; cin >> b;
	cout << "Enter the third number : "; cin >> c;
	cout << "Enter the fourth number : "; cin >> d;

	avr = cal_avr(a, b, c, d);
	cout << "******** average is " << avr << " ********" << endl;
	cout << "first number :		" << a << " -- " << "deviation :	" << cal_dev(avr, a) << endl;
	cout << "second number :		" << b<< " -- " << "deviation :	" << cal_dev(avr, b) << endl;
	cout << "third number :		" << c << " -- " << "deviation :	" << cal_dev(avr, c) << endl;
	cout << "fourth number :		" << d << " -- " << "deviation :	" << cal_dev(avr, d) << endl;

	return 0;
}

double cal_avr(int a, int b, int c, int d) {

	return (a + b + c + d) / 4.0;

}

double cal_dev(double avr, int num) {

	return num - avr;
}