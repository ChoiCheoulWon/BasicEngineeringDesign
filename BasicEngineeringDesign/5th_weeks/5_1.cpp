/*
���ö� ��� ����

�� ���� �޴��� �ֹ��� �ް� ���, �Ż��� ������ִ� ���α׷�
�� �޴� 1000�� 1500��
�ֹ� �Է¹ް� ���� ��� ��ȭ -> void order(int*,int*)
�Ż� ����Լ� -> int turnover(int,int)

*/

#include <iostream>

using namespace std;

void order(int*, int*);
int turnover(int, int);

int main() {

	int stock1 = 100, stock2 = 100;
	int profit;

	order(&stock1, &stock2);
	profit = turnover(stock1, stock2);

	cout << "-- ���� --" << endl;
	cout << "ġŲ���� : " << stock1 << " / 100" << endl;
	cout << "�������� : " << stock2 << " / 100" << endl;

	cout << "�Ż� = " << profit << endl;

	return 0;

}

void order(int* stock1, int* stock2) {
	int menu1, menu2;
	cout << "������ �ֹ����� �Է��ϼ���(ġŲ����,��������) : "; cin >> menu1 >> menu2;
	*stock1 -= menu1; *stock2 -= menu2;
	cout << "������ �ֹ����� �Է��ϼ���(ġŲ����,��������) : "; cin >> menu1 >> menu2;
	*stock1 -= menu1; *stock2 -= menu2;
	cout << "������ �ֹ����� �Է��ϼ���(ġŲ����,��������) : "; cin >> menu1 >> menu2;
	*stock1 -= menu1; *stock2 -= menu2;
}

int turnover(int stock1, int stock2) {

	return (100 - stock1) * 1000 + (100 - stock2) * 1500;
}