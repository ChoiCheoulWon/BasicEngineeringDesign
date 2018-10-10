/*
È¦¼ö Â¦¼ö ±¸ºÐÇÏ±â

°£´Ü
*/

#include <iostream>

using namespace std;

int main() {
	int num;

	cout << "Input your number:"; cin >> num;

	if (num % 2 == 0)
		cout << num << " is even number." << endl;
	else
		cout << num << " is odd number." << endl;

	return 0;

}