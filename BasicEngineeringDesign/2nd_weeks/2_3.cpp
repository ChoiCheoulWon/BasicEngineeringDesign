/*
학생 정보 기록
두 명의 학생에 대한 정보를 입력, 한 번에 출력하는 프로그램

*/

#include <iostream>

using namespace std;

int main() {
	int id1, id2;
	char grade1_1, grade1_2, grade2_1, grade2_2;

	cout << "student ID : ";
	cin >> id1;
	cout << "Course 1 : ";
	cin >> grade1_1;
	cout << "Course 2 : ";
	cin >> grade1_2;
	cout << "student ID : ";
	cin >> id2;
	cout << "Course 1 : "; cin >> grade2_1;
	cout << "Course 2 : "; cin >> grade2_2;
	
	cout << "-----output----------" << endl;
	
	cout << id1 << '\t' << grade1_1 << '\t' << grade1_2 << endl;
	cout << id2 << '\t' << grade2_1 << '\t' << grade2_2 << endl;

}