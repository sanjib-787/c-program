#include"../hdr/header.h"
int strindex(char *,char );
int main(void)
{
	char *ptr,c;
	ptr=(char *)malloc(sizeof(char)*MAX_SIZE);
	printf("enter a string \n");
	fgets(ptr,MAX_SIZE,stdin);
	printf("enter a character to find:\n");
	scanf("%c",&c);
	printf("%d",strindex(ptr,c));
	free(ptr);
	return 0;
}
int strindex(char *p,char c)
{
	int length=0;
	while(*p!='\0'){
		if(*p==c){
		length++;
		}
		p++;
	}
	return length;
}
