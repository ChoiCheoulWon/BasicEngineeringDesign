/*
��Ģ���� ����
�Ǽ� a,b�� �Է¹޾� ��Ģ������ �ϴ� ���α׷��� �����.

���ϴ� ������ ���� ����

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