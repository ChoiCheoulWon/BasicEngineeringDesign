/*
���ӵ� ���ĺ� ���

2~25�Է� X
X-1,X,X+1��° ���ĺ� ���

A �� ASCII code�� 65
*/

#include <iostream>

using namespace std;

int main() {
	int X;
	cout << "Enter the name number(2~25) : ";
	cin >> X;
	cout << "----------output----------" << endl;
	cout << (char)(X+63) <<" " << (char)(X+64) <<" " << (char)(X + 65) << endl;

	return 0;
}