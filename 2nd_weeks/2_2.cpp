/*
연속된 알파벳 출력

2~25입력 X
X-1,X,X+1번째 알파벳 출력

A 의 ASCII code는 65
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
