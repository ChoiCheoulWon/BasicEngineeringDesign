/*
자리올림

일련의 덧셈 문제가 주어졌을 때, 올리는 횟수를 알려주는 프로그램

3자리의 부호가 없는 정수 두개 입력

일반적인 함수를 만들까? 아니면 3자리에만 적용할 수 있는 프로그램을 만들까..

3자리만 적용..
*/

#include <iostream>

using namespace std;

int main() {

	int carry_cnt = 0;
	int carry_flag = 0;
	int num1, num2;

	cout << "Enter 2 number : "; cin >> num1 >> num2;
	if (num1 % 10 + num2 % 10 > 9) {
		carry_cnt++; carry_flag = 1;
	}
	if (num1 / 10 % 10 + num2 / 10 % 10+ carry_flag > 9) {
		carry_cnt++; carry_flag = 1;
	}
	else {
		carry_flag = 0;
	}
	if (num1 / 100 % 10 + num2 / 100 % 10 + carry_flag > 9) {
		carry_cnt++; carry_flag = 1;
	}

	if (carry_cnt == 0)
		cout << "No carry operation." << endl;
	else
		cout << carry_cnt << " carry operations." << endl;

	return 0;
}