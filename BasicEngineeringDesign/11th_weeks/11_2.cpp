/*
�ܾ� ���� ���α׷�

�ִ� 20����

�Է¹��� ��ġ�� ����� ��ĭ�� �����.

*/

#include <iostream>
#include<cstring>

using namespace std;

int main() {

	char str[21];
	int idx;
	cout << "20���� �̳��� ���� �Է� : ";
	cin >> str;
	cout << "������ ���� ��ġ �Է� : ";
	cin >> idx;

	for (int i = idx; i < strlen(str); i++) {
		str[i] = str[i + 1];
	}

	cout << str;
}