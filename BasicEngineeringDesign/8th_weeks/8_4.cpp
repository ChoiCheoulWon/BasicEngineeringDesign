/*
피보나치 넘버

recursive function

fibonacci(0) = 0, fibonacci(1) = 1;
*/

#include <iostream>

using namespace std;

int fibonacci(int);

int main() {
	int num;

	cout << "Input the number : "; cin >> num;
	cout << "fibo(" << num << ") = " << fibonacci(num) << endl;

	return 0;
}

int fibonacci(int num) {
	
	if (num == 0)
		return 0;
	if (num == 1)
		return 1;

	return fibonacci(num - 1) + fibonacci(num - 2);
}