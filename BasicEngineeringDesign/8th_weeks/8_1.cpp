/*
사각형 및 삼각형 만들기

for문을 이용한 출력

*/

#include <iostream>

using namespace std;

int main() {
	int i, j, k;

	//사각형
	for (i = 0; i < 15; i++) {
		for (j = 0; j < 15; j++) {
			cout << "*";
		}
		cout << endl;
	}

	//왼쪽 직각 삼각형

	for (i = 0; i < 15; i++) {
		for (j = 0; j <= i; j++) {
			cout << "*";
		}
		for (k = j; k < 15; k++) {
			cout << " ";
		}
		cout << endl;
	}

	for (i = 15; i > 0; i--) {
		for (j = 0; j < i-1; j++) {
			cout << " ";
		}
		for (k = i; k <= 15; k++) {
			cout << "*";
		}
		cout << endl;
	}

	return 0;
}