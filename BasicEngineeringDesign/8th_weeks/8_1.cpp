/*
�簢�� �� �ﰢ�� �����

for���� �̿��� ���

*/

#include <iostream>

using namespace std;

int main() {
	int i, j, k;

	//�簢��
	for (i = 0; i < 15; i++) {
		for (j = 0; j < 15; j++) {
			cout << "*";
		}
		cout << endl;
	}

	//���� ���� �ﰢ��

	for (i = 0; i < 15; i++) {
		for (j = 0; j <= i; j++) {
			cout << "*";
		}
		for (k = j; k < 15; k++) {
			cout << " ";
		}
		cout << endl;
	}

	for (i = 15; i > 0; i--) {
		for (j = 0; j < i-1; j++) {
			cout << " ";
		}
		for (k = i; k <= 15; k++) {
			cout << "*";
		}
		cout << endl;
	}

	return 0;
}