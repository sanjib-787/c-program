#include<stdio.h>
int main(void)
{
	FILE *fp;
	fp = fopen( "seek.txt", "w+");
	printf("enter a string :\n")
	scanf("%s",str1);
	fprintf(fp, "%s", str1);
	rewind(fp);
	printf("%p",fp);
	while((ch=fgetc(fp))!=EOF){
		printf("%c",ch);
	}

}
