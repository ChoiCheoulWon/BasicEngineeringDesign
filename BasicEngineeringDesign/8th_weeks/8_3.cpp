/*
2또는 3의 배수 구하기

두 정수를 입력받고 그 정수 사이에 있는 2또는 3의 배수의 합을 구하는 프로그램

첫번째 정수가 두번째 정수보다 크면 에러메시지 출력 후 종료

*/

#include<iostream>

using namespace std;

int main() {

	int a, b;
	int i;
	int sum = 0;
	cout << "input first number : "; cin >> a;
	cout << "input second number : "; cin >> b;

	if (a >= b) {
		cout << "second input is less than equal to first input" << endl;
	}
	else if (a < 1 || b < 1) {
		cout << "input is less than 1" << endl;
	}
	else {

		for (i = a; i <= b; i++) {
			if (i % 2 == 0 || i % 3 == 0) {
				sum += i;
			}
		}

		cout << "result is " << sum << endl;
	}

	return 0;
}