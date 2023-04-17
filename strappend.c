#include"../hdr/header.h"
char *strnappend(char *,const char *,int);
char *strappend(char *,const char *);
int main(void)
{
	char *sptr,*cptr;
	int n;
	sptr=(char*)malloc(sizeof(char)*MAX_SIZE);
	cptr=(char*)malloc(sizeof(char)*MAX_SIZE);
	printf("enter first string:");
	fgets(sptr,MAX_SIZE,stdin);
	printf("enter second string:");
	fgets(cptr,MAX_SIZE,stdin);
	printf("%s",strappend(sptr,cptr));
	printf("%s",strnappend(sptr,cptr,n));
	free(sptr);
	free(cptr);
//	printf("%s",sptr);
	return 0;
}
char *strappend(char *dest,const char *src)
{
	char *temp=dest;
	char *t=temp;
	while(*dest!='\0'){
		*temp=*dest;
		dest++;
		temp++;
		if(*dest=='\n'){
		*dest='\0';
		}
	}
	//printf("after while %s\n",temp);
	while(*src!='\0'){
		*temp=*src;
		temp++;
		src++;
	}
	temp='\0';
	return t;
}
char *strnappend(char *dest,const char *src,int n)
{
	printf("enter how many elements you want to add:");
	scanf("%d",&n);
	int index=-1;
	char *temp=dest;
	char *t=temp;
	printf("t is %s",t);
	while(*dest!='\0'){
		*temp=*dest;
		dest++;
		temp++;
		if(*dest=='\n'){
		*dest='\0';
		}
	}
	for(int i=0;index==n;i++){
		index++;
		*temp=*src;
		temp++;
		src++;
	}
	temp='\0';
	return t;
}
