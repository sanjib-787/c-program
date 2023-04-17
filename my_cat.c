#include<stdio.h>
#include<stdlib.h>
#define SIZE 100
int main(int argc, char **argv)
{
	FILE *fp1, *fp2, *fp3;
	char *str, c;
	fp1 = fopen(*(argv + 1), "r");
	fp2 = fopen(*(argv + 2), "r");
	fp3 = fopen(*(argv + 3), "w");
	if(fp1 == NULL || fp2 == NULL || fp3 == NULL) {
		printf("files are not opening.");
		exit(EXIT_FAILURE);
	}
	while((c = fgetc(fp1)) != EOF) {
		fputc(c, fp3);
	}
	while((c = fgetc(fp2)) != EOF) {
		fputc(c, fp3);
	}
	fclose(fp1);
	fclose(fp2);
	fclose(fp3);
}
