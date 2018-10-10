/*
피보나치 수열 2

전역변수 2개
int fibonacci() 내에서의 지역변수 1개만을 선언 

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