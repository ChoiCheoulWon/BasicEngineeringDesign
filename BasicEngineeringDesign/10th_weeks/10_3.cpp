/*
�빮�� ��ȯ

�ִ� 50�� �Է�
string library ����ߴ�..

str ��¼����¼��~
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