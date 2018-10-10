/*
학점계산

세 과목의 점수를 입력받고, 평균을 구한 후 평균값의 학점을 구하는 프로그램

main함수에서 2가지 함수를 호출하는 방식으로 구현
avgfunc() - 세 과목의 평균을 구하는 함수
gradefunc() - 학점을 계산하는 함수

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