/*
�������

�� ������ ������ �Է¹ް�, ����� ���� �� ��հ��� ������ ���ϴ� ���α׷�

main�Լ����� 2���� �Լ��� ȣ���ϴ� ������� ����
avgfunc() - �� ������ ����� ���ϴ� �Լ�
gradefunc() - ������ ����ϴ� �Լ�

*/

#include <iostream>

using namespace std;

double avgfunc(double, double, double);
void gradefunc(double);

int main() {
	double score[3];
	double avr;
	cout << "**Input your score**" << endl;
	cout << "class1 = "; cin >> score[0];
	cout << "class2 = "; cin >> score[1];
	cout << "class3 = "; cin >> score[2];

	avr = avgfunc(score[0], score[1], score[2]);
	gradefunc(avr);

	return 0;
}

double avgfunc(double num1, double num2, double num3) {

	return (num1 + num2 + num3) / 3.0;

}
void gradefunc(double avr) {
	if (avr >= 90) cout << "A!" << endl;
	else if (avr >= 80) cout << "B!" << endl;
	else if (avr >= 70) cout << "C!" << endl;
	else if (avr >= 50) cout << "D!" << endl;
	else cout << "F!" << endl;

}