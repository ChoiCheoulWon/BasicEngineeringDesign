/*
2�Ǵ� 3�� ��� ���ϱ�

�� ������ �Է¹ް� �� ���� ���̿� �ִ� 2�Ǵ� 3�� ����� ���� ���ϴ� ���α׷�

ù��° ������ �ι�° �������� ũ�� �����޽��� ��� �� ����

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