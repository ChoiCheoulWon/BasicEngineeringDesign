/*
���� ��ȯ

ũ�� 10�� ���� �迭
 ���� ��ȯ�� ������ �Լ��� �̿�

*/

#include <iostream>

using namespace std;

void exchange_num(int[], int, int);

int main() {
	
	int num[10];
	int idx_1, idx_2;
	cout << "10���� ���� �Է� : ";
	for (int i = 0; i < 10; i++) {
		cin >> num[i];
	}
	cout << "�� ��° ���ڸ� ���� �ٲٽðڽ��ϱ�? : "; cin >> idx_1 >>idx_2;

	exchange_num(num, idx_1, idx_2);

	for (int i = 0; i < 10; i++) {
		cout << num[i] << " ";
	}
	cout << endl;

	return 0;
}

void exchange_num(int num[], int idx1, int idx2) {
	int temp;

	temp = num[idx1];
	num[idx1] = num[idx2];
	num[idx2] = temp;

}