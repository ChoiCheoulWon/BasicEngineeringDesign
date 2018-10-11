/*
프로젝트1 누산기
입력된 사칙연산을 수행하는 프로그램
한자리 숫자만 입력된다고 가정
연산 결과는 소수 둘째 자리 까지 출력

누산기 내에는 결과값을 저장하는 메모리가 있다고 가정
메모리 초기값 = 0

연산된 값을 메모리에 더할지 더하지 않을지를 사용자에게 물음

사용자가 식에 '.'을 입력할 때 까지 반복하여 식을 입력받는다.

'.'이 입력되면 메모리에 저장된 값을 출력한 후 프로그램을 종료

제한 조건 및 요구 조건
‘숫자 연산자 숫자’ 형태의 식을 입력 받는다.
리눅스 환경 및 gcc를 사용한다
어떤 수를 0으로 나누는 식은 에러메시지 출력 후 입력된 식을 무시한다
한 자리 수만 입력이 가능하다
연산 결과는 소수점 둘째 자리까지 출력하나.
사칙연산의 결과는 반드시 함수를 이용하여 얻는다.
연산 결과와 메모리에 저장된 값을 더하는 함수는 반드시 call by reference를 사용한다.
반복문 사용을 허용한다.

*/

#include <iostream>

using namespace std;

double add(char, char);
double sub(char, char);
double mul(char, char);
double div(char, char);
void add_mem(double*, double*);


int main() {

	char a, op, b;
	double nusan = 0, result;
	int ans,div0_flag;

	while (1) {
		cout << "식을 입력하세요 : ";
		cin >> a;
		if (a == '.') {
			cout << fixed;
			cout.precision(2);
			cout << "메모리에 저장된 값 : " << nusan << endl;
			break;
		}
		cin >> op;
		cin >> b;
		
		div0_flag = 0;
		if (op == '+') result = add(a, b);
		if (op == '-') result = sub(a, b);
		if (op == '*') result = mul(a, b);
		if (op == '/') {
			if (b == '0') {
				cout << "0으로 나눌 수 없습니다." << endl;
				div0_flag = 1;
			}
			else
				result = div(a, b);
		}
		if (div0_flag != 1) {
			cout << fixed;
			cout.precision(2);
			cout << "답 : " << result << endl;
			cout << "이 답을 메모리에 저장된 값과 더할까요?" << endl;
			cout << "1. 예 2. 아니오 : "; cin >> ans;
			if (ans == 1) add_mem(&nusan, &result);


			cout << fixed;
			cout.precision(2);
			cout << "메모리에 저장된 값 : " << nusan << endl;
		}
	}
}

double add(char a, char b) {
	double num_a, num_b;
	num_a = (double)(a - '0');
	num_b = (double)(b - '0');
	return num_a + num_b;
}

double sub(char a, char b) {
	double num_a, num_b;
	num_a = (double)(a - '0');
;
	num_b = (double)(b - '0');

	return num_a - num_b;
}

double mul(char a, char b) {
	double num_a, num_b;
	num_a = (double)(a - '0');
	num_b = (double)(b - '0');

	return num_a * num_b;
}

double div(char a, char b) {
	double num_a, num_b;
	num_a = (double)(a - '0');
	num_b = (double)(b - '0');

	return num_a / num_b;
}

void add_mem(double* nusan, double* result) {

	*nusan += *result;

}