/*
피보나치 수열 3

main함수 내에서 지역변수 2개
int fibonacci 함수에서 지역번수 1개 사용

함수는 int fibonacci(int *, int *)

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