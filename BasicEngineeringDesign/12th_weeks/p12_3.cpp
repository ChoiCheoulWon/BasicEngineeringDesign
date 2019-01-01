#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {

	FILE *fp1, *fp2;
	char filename1[20], filename2[20];
	char file1[101], file2[101];
	char temp1, temp2;
	int count = 0;
	int same = 0;
	int i = 0, j = 0;
	printf("Input first file name : ");
	scanf("%s", filename1);
	printf("Input second file name : ");
	scanf("%s", filename2);
	fp1 = fopen(filename1, "r");
	fp2 = fopen(filename2, "r");

	//공백 제거
	while (!feof(fp1) && !feof(fp2)) {
		fscanf(fp1, "%c", &temp1);
		fscanf(fp2, "%c", &temp2);
		if (temp1 != ' ' && temp1 != '\n') {
			file1[i] = temp1;
			i++;
		}
		if (temp2 != ' ' && temp2 != '\n') {
			file2[j] = temp2;
			j++;
		}

		temp1 = '\n'; temp2 = '\n';
	}
	file1[i] = '\n'; file2[j] = '\n';
	for (i = 0;; i++) {
		if (file1[i] == '\n' || file2[i] == '\n')
			break;

		if (file1[i] == file2[i])
			same++;
		count++;
	}
	printf("총 문자 수 : %d\n", count);
	printf("같은 문자 수 : %d\n", same);
	printf("%lf%%\n", (double)same / count *100);

	return 0;

	fclose(fp1);
	fclose(fp2);
}