/*
�Ǻ���ġ ����

iterative�� ����� recursive�� ����� ����Ͽ� ���� ��� �� ���� ������ ���ϴ� ���α׷�
*/

#include <iostream>

using namespace std;


int fibo_recur(int);
int fibo_iter(int);

int main() {

	int num;

	cout << "Input the number : "; cin >> num;
	cout << "fibo(" << num << ") = " << fibo_recur(num) << " by recursive method" << endl;
	cout << "fibo(" << num << ") = " << fibo_iter(num) << " by iterative method" << endl;

	return 0;

}

int fibo_recur(int num) {
	if (num == 0) return 0;
	if (num == 1) return 1;

	return fibo_recur(num - 2) + fibo_recur(num - 1);
}

int fibo_iter(int num) {
	int first = 0, second = 1;
	int temp;
	int i;
	for (i = 0; i < num; i++) {
		temp = first + second;
		first = second;
		second = temp;
	}
	
	return first;
}