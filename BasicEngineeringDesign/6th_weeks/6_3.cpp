/*
�ڸ��ø�

�Ϸ��� ���� ������ �־����� ��, �ø��� Ƚ���� �˷��ִ� ���α׷�

3�ڸ��� ��ȣ�� ���� ���� �ΰ� �Է�

�Ϲ����� �Լ��� �����? �ƴϸ� 3�ڸ����� ������ �� �ִ� ���α׷��� �����..

3�ڸ��� ����..
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