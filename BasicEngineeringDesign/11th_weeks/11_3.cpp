/*
행렬 곱셈 프로그램

1. 두 행렬을 생성,수정,곱하는 프로그램
2.  menu-driven 방식
3. 4x4행렬 2차원 integer
4. 행렬 선언 main, 각 기능은 함수로

*/

#include <iostream>
#include<cmath>
#include<ctime>

using namespace std;

void Generate_matrix(int [][4], int [][4]);
void Revise_matrix(int [][4], int [][4]);
void Multiple_matrix(int[][4], int[][4]);
void Print_matrix(int[][4], int[][4]);
int main(){

	int mat1[4][4], mat2[4][4];
	int choice;
	
	srand(time(NULL));
	while (1) {

		cout << "******************************" << endl;
		cout << "* 1. Generation Matrix       *" << endl;
		cout << "* 2. Revise Matrix           *" << endl;
		cout << "* 3. Multiplication Matrix   *" << endl;
		cout << "* 4. Exit                    *" << endl;
		cout << "******************************" << endl;
		cout << "기능을 선택하세요(1~4) : "; cin >> choice;

		if (choice == 1) {
			Generate_matrix(mat1, mat2);
		}
		if (choice == 2) {
			Revise_matrix(mat1, mat2);
		}
		if (choice == 3) {
			Multiple_matrix(mat1, mat2);
		}
		if (choice == 4) {
			cout << "종료" << endl;
			break;
		}

	}

	return 0;
}

void Generate_matrix(int mat1[][4], int mat2[][4]) {
	int i, j;

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			mat1[i][j] = rand()%10;
			mat2[i][j] = rand()%10;
		}
	}

	Print_matrix(mat1, mat2);

}

void Revise_matrix(int mat1[][4], int mat2[][4]) {

	int mat, idx1, idx2;
	int new_value;
	cout << "현재 Matrix" << endl;
	Print_matrix(mat1, mat2);
	
	cout << "수정하고 싶은 Matrix와 index를 입력하세요 (mat,idx1,idx2) : ";
	cin >> mat >> idx1 >> idx2;
	cout << "수정하고 싶은 값을 입력하세요 : "; cin >> new_value;

	if (mat == 1) {
		mat1[idx1][idx2] = new_value;
	}
	if (mat == 2) {
		mat2[idx1][idx2] = new_value;
	}

	cout << "수정된 Matrix" << endl;
	Print_matrix(mat1, mat2);
}

void Multiple_matrix(int mat1[][4], int mat2[][4]) {
	int i, j, k;
	int mul_mat[4][4] = { 0, };

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			for (k = 0; k < 4; k++) {
				mul_mat[i][j] += mat1[i][k] * mat2[k][j];
			}
		}
	}
	cout << "Mul_mat" << endl;
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			cout << mul_mat[i][j] << " ";
		}
		cout << endl;
	}
	
}
void Print_matrix(int mat1[][4], int mat2[][4]) {
	
	int i, j;
	
	cout << "Mat1" << endl;
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			cout << mat1[i][j] << " ";
		}
		cout << endl;
	}

	cout << endl;
	cout << "Mat2" << endl;
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			cout << mat2[i][j] << " ";
		}
		cout << endl;
	}
}