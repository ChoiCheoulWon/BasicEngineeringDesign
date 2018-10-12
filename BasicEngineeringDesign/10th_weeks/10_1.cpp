/*
최대,최소값 찾기

10개의 정수 입력받음
최대,최소값 출력
*/

#include <iostream>

using namespace std;

int main() {

	int num[10];
	int max, min;
	cout << "Input inter : ";
	for (int i = 0; i < 10; i++) {
		cin >> num[i];
	}
	max = num[0]; min = num[0];
	for (int i = 1; i < 10; i++) {
		if (num[i] > max) max = num[i];
		if (num[i] < min) min = num[i];
	}

	cout << "Max = " << max << ", Min = " << min << endl;

	return 0;
}