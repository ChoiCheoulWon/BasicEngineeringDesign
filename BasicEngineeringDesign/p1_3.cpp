#include<stdio.h>

int main() {
	char c1,c2;

	printf("Enter two characters : ");
	scanf("%c %c", &c1,&c2);
	printf("ASCII for char '%d' is : %d\n", c1, c1);
	printf("ASCII for char '%d' is : %d\n", c2, c2);
	return 0;

}