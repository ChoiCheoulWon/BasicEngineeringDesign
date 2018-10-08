/*
할부 납입금 비교

사용자에게 물건의 가격을 입력받은 후 매달 납입해야하는 할부 가격을 비교해주는 프로그램

6개월은 가격이 5%인상
*/

#include <iostream>

using namespace std;

int main() {
	int price;

	cout << "Price : "; cin >> price;
	cout << "----------output----------" << endl;
	cout << "Month		:	3	6" << endl;
	cout << "Payment		:	" << price << '\t' << price * 1.05 << endl;
	cout << "-----------------------------------------" << endl;
	cout << fixed;
	cout.precision(2);
	cout << "Pay/Month	:	" << price / 3.0 << '\t' << price * 1.05 / 6 << endl;

	return 0;
}
