#include<stdio.h>
#include<stdlib.h>
#define SIZE 100
int main(int argc, char **argv)
{
	FILE *fp;
	char *str;
	int count = 0;
	str = (char *)malloc(sizeof(char) * SIZE);
	fp = fopen("abc.txt","r+");
	if(fp == NULL) {
		printf("file not opening\n");
		exit(EXIT_FAILURE);
	}
	if(argc != 2){
		printf("give only 2 aguments.\n");
	}
	while(fgets(str,SIZE,fp) != NULL){
		printf("%s",str);
		count++;
	}
	printf("%d\n",count);
	fclose(fp);
}
