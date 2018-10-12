/*
	factorial
	n!을 iterative방법과 recursive방법을 사용하여 각각 구하여 출력
*/

#include <iostream>

using namespace std;

int fac_recur(int);
int fac_iter(int);

int main() {
	int n;

	cout << "Enter a number : "; cin >> n;
	if (n < 0) cout << "error!" << endl;
	else {
		cout << "Recursive : factorial(" << n << ")=" << fac_recur(n) << endl;
		cout << "Iterative : factorial(" << n << ")=" << fac_iter(n) << endl;
	}
	return 0;
}

int fac_recur(int n) {
	if (n == 1) return 1;

	return n * fac_recur(n - 1);
}

int fac_iter(int n) {
	int i;
	int fac = 1;
	for (i = n; i >= 1; i--) {
		fac *= i;
	}

	return fac;
}