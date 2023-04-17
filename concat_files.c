#include<stdio.h>
#include<stdlib.h>
#define SIZE 100
int main(void){
	FILE *fp1, *fp2;
	char *str1;
	str1 = (char*)malloc(sizeof(char)*100);
	fp1 = fopen("abc.txt", "a");
	fp2 = fopen("abc1.txt", "r");
	if(fp1 == NULL || fp2 == NULL) {
		printf("error in opening a file");
		exit(EXIT_FAILURE);
	}
	while((fgets(str1,100,fp2)) != NULL){
		fputs(str1,fp1);	
	}
	fclose(fp1);
	fclose(fp2);
}
