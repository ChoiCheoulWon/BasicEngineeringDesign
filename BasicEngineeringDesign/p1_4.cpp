//��� ������ ���ϴ� ���α׷�

#include<stdio.h>

int main() {
	int num1, num2;

	printf("Enter two integral numbers: ");
	scanf("%d %d", &num1, &num2);


	printf("%d / %d is %d with a remainder of : %d\n", num1, num2, num1 / num2, num1%num2);


	return 0;
}