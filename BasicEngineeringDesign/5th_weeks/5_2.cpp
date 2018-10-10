/*
피보나치수열
첫 항 1, 두번째 항 2

fibonacci 함수 내에서 static 변수 2개 지역변수 1개 선언해서 함수 작성
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