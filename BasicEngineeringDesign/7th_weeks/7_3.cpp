/*
����
������ ���� 3���� �Է¹޾� ���밪�� ������������ �����Ͽ� ���

abs() �Լ��� �̿��Ͽ� ���밪 ���

*/

#include <iostream>
#include <cmath>

using namespace std;

int main() {

	int a, b, c;
	int abs_a, abs_b, abs_c;

	cout << "please input 3 integers : "; cin >> a >> b >> c;
	// ���밪���� ��ȯ
	abs_a = abs(a); abs_b = abs(b); abs_c = abs(c);

	//swap���� ����
	int temp;

	if (abs_a > abs_b) {
		temp = abs_a;
		abs_a = abs_b;
		abs_b = temp;
	}
	if (abs_a > abs_c) {
		temp = abs_a;
		abs_a = abs_c;
		abs_c = temp;
	}
	if (abs_b > abs_c) {
		temp = abs_b;
		abs_b = abs_c;
		abs_c = temp;
	}

	cout << abs_a << " " << abs_b << " " << abs_c << endl;

	return 0;
}