/*
������Ʈ1 �����
�Էµ� ��Ģ������ �����ϴ� ���α׷�
���ڸ� ���ڸ� �Էµȴٰ� ����
���� ����� �Ҽ� ��° �ڸ� ���� ���

����� ������ ������� �����ϴ� �޸𸮰� �ִٰ� ����
�޸� �ʱⰪ = 0

����� ���� �޸𸮿� ������ ������ �������� ����ڿ��� ����

����ڰ� �Ŀ� '.'�� �Է��� �� ���� �ݺ��Ͽ� ���� �Է¹޴´�.

'.'�� �ԷµǸ� �޸𸮿� ����� ���� ����� �� ���α׷��� ����

���� ���� �� �䱸 ����
������ ������ ���ڡ� ������ ���� �Է� �޴´�.
������ ȯ�� �� gcc�� ����Ѵ�
� ���� 0���� ������ ���� �����޽��� ��� �� �Էµ� ���� �����Ѵ�
�� �ڸ� ���� �Է��� �����ϴ�
���� ����� �Ҽ��� ��° �ڸ����� ����ϳ�.
��Ģ������ ����� �ݵ�� �Լ��� �̿��Ͽ� ��´�.
���� ����� �޸𸮿� ����� ���� ���ϴ� �Լ��� �ݵ�� call by reference�� ����Ѵ�.
�ݺ��� ����� ����Ѵ�.

*/

#include <iostream>

using namespace std;

double add(char, char);
double sub(char, char);
double mul(char, char);
double div(char, char);
void add_mem(double*, double*);


int main() {

	char a, op, b;
	double nusan = 0, result;
	int ans,div0_flag;

	while (1) {
		cout << "���� �Է��ϼ��� : ";
		cin >> a;
		if (a == '.') {
			cout << fixed;
			cout.precision(2);
			cout << "�޸𸮿� ����� �� : " << nusan << endl;
			break;
		}
		cin >> op;
		cin >> b;
		
		div0_flag = 0;
		if (op == '+') result = add(a, b);
		if (op == '-') result = sub(a, b);
		if (op == '*') result = mul(a, b);
		if (op == '/') {
			if (b == '0') {
				cout << "0���� ���� �� �����ϴ�." << endl;
				div0_flag = 1;
			}
			else
				result = div(a, b);
		}
		if (div0_flag != 1) {
			cout << fixed;
			cout.precision(2);
			cout << "�� : " << result << endl;
			cout << "�� ���� �޸𸮿� ����� ���� ���ұ��?" << endl;
			cout << "1. �� 2. �ƴϿ� : "; cin >> ans;
			if (ans == 1) add_mem(&nusan, &result);


			cout << fixed;
			cout.precision(2);
			cout << "�޸𸮿� ����� �� : " << nusan << endl;
		}
	}
}

double add(char a, char b) {
	double num_a, num_b;
	num_a = (double)(a - '0');
	num_b = (double)(b - '0');
	return num_a + num_b;
}

double sub(char a, char b) {
	double num_a, num_b;
	num_a = (double)(a - '0');
;
	num_b = (double)(b - '0');

	return num_a - num_b;
}

double mul(char a, char b) {
	double num_a, num_b;
	num_a = (double)(a - '0');
	num_b = (double)(b - '0');

	return num_a * num_b;
}

double div(char a, char b) {
	double num_a, num_b;
	num_a = (double)(a - '0');
	num_b = (double)(b - '0');

	return num_a / num_b;
}

void add_mem(double* nusan, double* result) {

	*nusan += *result;

}