#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>


int main() {

	FILE *fp;
	int alpha[27] = { 0 };
	fp = fopen("text.txt", "r");
	char temp;
	int i;

	while (!feof(fp)) {
		fscanf(fp,"%c",&temp);
		if (temp >= 'a' && temp <= 'z') {
			alpha[temp - 96]++;
		}
		// �������� �ƹ��͵� �ȵ��ִµ� �ѹ� �� ���Ƽ� �� ���� �־��ش�..
		temp = '\n';
	}

	for (i = 1; i <= 26; i++) {
		
		printf("%c : %d  ", 96 + i, alpha[i]);
		if (i % 5 == 0) {
			printf("\n");
		}
	}
	
	fclose(fp);

}