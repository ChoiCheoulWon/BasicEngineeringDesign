/*
정렬
임의의 정수 3개를 입력받아 절대값을 오름차순으로 정렬하여 출력

abs() 함수를 이용하여 절대값 계산

*/

#include <iostream>
#include <cmath>

using namespace std;

int main() {

	int a, b, c;
	int abs_a, abs_b, abs_c;

	cout << "please input 3 integers : "; cin >> a >> b >> c;
	// 절대값으로 변환
	abs_a = abs(a); abs_b = abs(b); abs_c = abs(c);

	//swap으로 정렬
	int temp;

	if (abs_a > abs_b) {
		temp = abs_a;
		abs_a = abs_b;
		abs_b = temp;
	}
	if (abs_a > abs_c) {
		temp = abs_a;
		abs_a = abs_c;
		abs_c = temp;
	}
	if (abs_b > abs_c) {
		temp = abs_b;
		abs_b = abs_c;
		abs_c = temp;
	}

	cout << abs_a << " " << abs_b << " " << abs_c << endl;

	return 0;
}