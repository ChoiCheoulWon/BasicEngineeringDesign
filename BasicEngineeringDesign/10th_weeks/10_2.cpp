/*
���� ������

�ִ� 50���� ������ �Է¹޾� �ϳ��� �迭�� ���� �� �� ���� ������ ���α׷�

*/

#include <iostream>

using namespace std;

int main() {

	int num[50];
	int n;

	cout << "Enter the number of Input : ";
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> num[i];
	}
	
	int temp;

	for (int i = 0; i < n / 2; i++) {
		temp = num[i];
		num[i] = num[n - i - 1];
		num[n - i - 1] = temp;
	}

	for (int i = 0; i < n; i++) {
		cout << num[i] << " ";
	}
}