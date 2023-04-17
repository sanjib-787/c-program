#include"../hdr/header.h"
#include<string.h>
char *strrev(char *);
int main()
{
	char *sptr;
	sptr=(char*)malloc(sizeof(char)*MAX_SIZE);
	printf("Enter a string:");
	fgets(sptr,MAX_SIZE,stdin);
	printf("%s",strrev(sptr));
	return 0;
}
char *strrev(char *p)
{
	char *temp;
	temp=(char*)malloc(sizeof(char)*MAX_SIZE);
	char *temp1=temp;
	printf("reverse of string is: ");
	for(int i=strlen(p)-1;i>=0;i--){
		*temp=*(p+i);
		//printf("%c",*temp);
		temp++;
//		return p;
	}
	temp='\0';
//	printf("\n");
	return temp1;
}
