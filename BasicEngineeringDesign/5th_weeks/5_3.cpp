/*
�Ǻ���ġ ���� 2

�������� 2��
int fibonacci() �������� �������� 1������ ���� 

*/

#include <iostream>

using namespace std;

int fibonacci();

int first = 1, second = 1;

int main() {

	cout << fibonacci() << " ";
	cout << fibonacci() << " ";
	cout << fibonacci() << " ";
	cout << fibonacci() << " ";
	cout << fibonacci() << endl;

	return 0;
}

int fibonacci() {
	int temp;
	temp = first + second;
	first = second;
	second = temp;

	return first;
}