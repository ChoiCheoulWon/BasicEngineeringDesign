#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main() {

	FILE *fp1, *fp2;

	char input[100], output[100];
	char temp;
	printf("입력 파일명을 입력하세요 : ");
	scanf("%s", input);
	printf("출력 파일명을 입력하세요 : ");
	scanf("%s", output);

	fp1 = fopen(input, "r");
	fp2 = fopen(output, "a");

	while (!feof(fp1)) {
		fscanf(fp1, "%c", &temp);
		if (temp >= 'A' && temp <= 'Z') {
			fprintf(fp2, "%c", temp + 32);
		}
		else if (temp != ' ') {
			fprintf(fp2, "%c", temp);
		}
		temp = '\n';
	}

	fclose(fp1);
	fclose(fp2);

}