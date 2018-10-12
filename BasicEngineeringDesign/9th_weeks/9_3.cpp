/*
 The towers of Hanoi

모르겠다..

*/

#include <stdio.h>

int hanoi(char a, char b, char c, int n);
int step;

int main() {
	int i, j;
	char source = 'S', destination = 'D', auxiliary = 'A';
	int test_num, disk_num;

	printf("test case :");
	scanf_s("%d", &test_num);


	while (test_num > 0) {
		step = 1;
		printf("How many disks :");
		scanf_s("%d", &disk_num);
		hanoi(source, auxiliary, destination, disk_num);
		test_num--;
	}
}
int hanoi(char a, char b, char c, int n)
{
	if (n == 0) {
		return 0;
	}

	if (n == 1) {
		printf("Step %5d: %c -> %c\n", step++, a, c);
		return 0;
	}

	hanoi(a, c, b, n - 1);
	printf("Step %5d: %c -> %c\n", step++, a, c);
	hanoi(b, a, c, n - 1);
}