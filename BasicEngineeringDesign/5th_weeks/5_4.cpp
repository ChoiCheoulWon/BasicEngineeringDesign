/*
�Ǻ���ġ ���� 3

main�Լ� ������ �������� 2��
int fibonacci �Լ����� �������� 1�� ���

�Լ��� int fibonacci(int *, int *)

*/

#include <iostream>

using namespace std;

int fibonacci(int *, int *);

int main() {
	int first = 1, second = 1;

	cout << fibonacci(&first,&second) << " ";
	cout << fibonacci(&first, &second) << " ";
	cout << fibonacci(&first, &second) << " ";
	cout << fibonacci(&first, &second) << " ";
	cout << fibonacci(&first, &second) << endl;

	return 0;
}

int fibonacci(int *first, int *second) {
	int temp;
	temp = *first + *second;
	*first = *second;
	*second = temp;

	return *first;
}