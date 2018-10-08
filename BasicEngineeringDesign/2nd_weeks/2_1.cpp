/*
운동에너지 계산
사용자에게 양의 실수 2개를 받아 운동에너지를 출력하는 프로그램을 만든다.

*/

#include<iostream>

using namespace std;

int main() {
	double m, v;
	cout << "Mass	: "; cin >> m;
	cout << "Velocity	: "; cin >> v;
	cout << "----------output----------" << endl;
	cout << fixed;
	cout.precision(2);
	cout << 0.5*m*v*v;

	return 0;
}