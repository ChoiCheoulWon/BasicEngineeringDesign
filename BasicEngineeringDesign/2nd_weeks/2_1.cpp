/*
������� ���
����ڿ��� ���� �Ǽ� 2���� �޾� ��������� ����ϴ� ���α׷��� �����.

*/

#include<iostream>

using namespace std;

int main() {
	double m, v;
	cout << "Mass	: "; cin >> m;
	cout << "Velocity	: "; cin >> v;
	cout << "----------output----------" << endl;
	cout << fixed;
	cout.precision(2);
	cout << 0.5*m*v*v;

	return 0;
}