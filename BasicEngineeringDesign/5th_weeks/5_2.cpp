/*
�Ǻ���ġ����
ù �� 1, �ι�° �� 2

fibonacci �Լ� ������ static ���� 2�� �������� 1�� �����ؼ� �Լ� �ۼ�
*/

#include <iostream>

using namespace std;

int fibonacci();

int main() {
	cout << fibonacci() << " ";
	cout << fibonacci() << " ";
	cout << fibonacci() << " ";
	cout << fibonacci() << " ";
	cout << fibonacci() << endl;

	return 0;
}

int fibonacci() {
	static int first = 1, second = 1;
	int temp;
	temp = first + second;
	first = second;
	second = temp;
	
	return first;
}