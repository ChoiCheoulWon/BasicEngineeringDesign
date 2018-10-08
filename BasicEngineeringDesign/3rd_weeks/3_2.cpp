/*
제곱 계산기
사용자에게 양의 정수 한개를 입력받아 제곱을 하여 출력하는 프로그램

++  함수를 사용하여 작성
getNum() – 사용자에게 입력을 받는 역할을 한다.
sqr() – 사용자에게 받을 값을 제곱하여 돌려준다.
printOne() – 사용자에게 결과값을 출력해 준다.
*/
// 변수 사용없이 구현 가능? -> 가능할듯
#include <iostream>

using namespace std;

int getNum();
int sqr(int);
void printOne(int);

int main() {

	printOne(sqr(getNum()));

	return 0;
}

int getNum() {
	int num;
	cout << "Enter a number to be squared: "; cin >> num;

	return num;
}
int sqr(int num) {
	return num * num;
}

void printOne(int result) {

	cout << "The value is : " << result << endl;

}