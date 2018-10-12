/*
대문자 변환

최대 50자 입력
string library 사용했다..

str 어쩌구저쩌구~
*/

#include <iostream>
#include <cstring>

using namespace std;

int main() {

	char alpha[53];
	int i;

	cin.getline(alpha, 51);
	
	for (int i = 0; i < strlen(alpha); i++) {
		if (alpha[i] >= 'a' && alpha[i] <= 'z') {
			alpha[i] -= 32;
		}
	}
	cout << alpha << endl;

	return 0;
}