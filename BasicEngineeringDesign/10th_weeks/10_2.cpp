/*
숫자 뒤집기

최대 50개의 정수를 입력받아 하나의 배열에 저장 후 그 수를 뒤집는 프로그램

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