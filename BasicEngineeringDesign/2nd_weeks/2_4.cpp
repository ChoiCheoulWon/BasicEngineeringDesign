/*
�Һ� ���Ա� ��

����ڿ��� ������ ������ �Է¹��� �� �Ŵ� �����ؾ��ϴ� �Һ� ������ �����ִ� ���α׷�

6������ ������ 5%�λ�
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