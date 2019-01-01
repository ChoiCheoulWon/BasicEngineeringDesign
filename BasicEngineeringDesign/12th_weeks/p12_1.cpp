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
		// 마지막에 아무것도 안들어가있는데 한번 더 돌아서 빈 값을 넣어준다..
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