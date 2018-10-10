/*
숫자에 쉼표 찍기
(함수를 이용한 출력 연습)
*/

#include <iostream>

using namespace std;

void printWithComma(int);

int main() {
	int num;
	cout << "Enter a number : "; cin >> num;

	printWithComma(num);

	return 0;
}

void printWithComma(int num) {

	cout << num / 100000 % 10;
	cout << num / 10000 % 10;
	cout << num / 1000 % 10;
	cout << ",";
	cout << num / 100 % 10;
	cout << num / 10 % 10;
	cout << num % 10 << endl;

}