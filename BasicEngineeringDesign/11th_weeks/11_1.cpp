/*
숫자 교환

크기 10의 정수 배열
 숫자 교환은 별도의 함수를 이용

*/

#include <iostream>

using namespace std;

void exchange_num(int[], int, int);

int main() {
	
	int num[10];
	int idx_1, idx_2;
	cout << "10개의 숫자 입력 : ";
	for (int i = 0; i < 10; i++) {
		cin >> num[i];
	}
	cout << "몇 번째 숫자를 서로 바꾸시겠습니까? : "; cin >> idx_1 >>idx_2;

	exchange_num(num, idx_1, idx_2);

	for (int i = 0; i < 10; i++) {
		cout << num[i] << " ";
	}
	cout << endl;

	return 0;
}

void exchange_num(int num[], int idx1, int idx2) {
	int temp;

	temp = num[idx1];
	num[idx1] = num[idx2];
	num[idx2] = temp;

}