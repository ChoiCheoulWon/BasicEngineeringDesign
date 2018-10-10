/*
최대값 구하기
4개의 수를 입력받아 최대값 구하기
*/

#include <iostream>

using namespace std;

int main() {

	int num1, num2, num3, num4;
	int max;

	cout << "number 1" << endl;
	cin >> num1;
	max = num1;
	cout << "number 2" << endl;
	cin >> num2;
	if (num2 > max) max = num2;
	cout << "number 3" << endl;
	cin >> num3;
	if (num3 > max) max = num3;
	cout << "number 4" << endl;
	cin >> num4;
	if (num4 > max) max = num4;

	cout << "maximum value is " << max << endl;

	return 0;
}