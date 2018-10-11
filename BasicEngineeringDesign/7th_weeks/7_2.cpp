/*
사칙연산 계산기
실수 a,b를 입력받아 사칙연산을 하는 프로그램을 만든다.

원하는 연산을 선택 가능

*/

#include <iostream>

using namespace std;

int main() {

	double a, b;
	int op;
	cout << "please input integers" << endl;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	
	cout << "**************************" << endl;
	cout << "* 1. addition            *" << endl;
	cout << "* 2. subtraction         *" << endl;
	cout << "* 3. multiplication      *" << endl;
	cout << "* 4. division            *" << endl;
	cout << "**************************" << endl;
	
	cin >> op;

	switch (op) {
	case 1:
		cout << "a + b = " << a + b << endl;
		break;
	case 2:
		cout << "a - b = " << a - b << endl;
		break;
	case 3:
		cout << "a x b = " << a * b << endl;
		break;
	case 4:
		cout << "a / b = " << a / b << endl;
	}

	return 0;

}