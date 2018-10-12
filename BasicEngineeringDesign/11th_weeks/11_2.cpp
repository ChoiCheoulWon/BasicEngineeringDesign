/*
단어 삭제 프로그램

최대 20글자

입력받은 위치를 지우고 한칸씩 땡긴다.

*/

#include <iostream>
#include<cstring>

using namespace std;

int main() {

	char str[21];
	int idx;
	cout << "20글자 이내의 문자 입력 : ";
	cin >> str;
	cout << "삭제할 문자 위치 입력 : ";
	cin >> idx;

	for (int i = idx; i < strlen(str); i++) {
		str[i] = str[i + 1];
	}

	cout << str;
}