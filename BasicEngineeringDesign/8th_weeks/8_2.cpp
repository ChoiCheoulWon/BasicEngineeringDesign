/*
ũ�������� Ʈ�� �����

���� : 30

*/

#include <iostream>

using namespace std;

int main() {

	int i, j, k;
	//������ �� * 59��
	for (i = 0; i < 30; i++) {
		for (j = 0; j < 29-i; j++) {
			cout << " ";
		}
		for (k = 0; k < 2 * i + 1; k++) {
			cout << "*";
		}
		cout << endl;
	}

	return 0;
}