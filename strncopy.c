#include"../hdr/header.h"
char *strncopy(char *,const char *,int );
int main()
{
	char *dest;
	char *src;
	int n;
	src=(char*)malloc(sizeof(char)*MAX_SIZE);
	printf("Enter a string:");
	fgets(src,MAX_SIZE,stdin);
	dest=(char*)malloc(sizeof(char)*MAX_SIZE);
	printf("enter no of char to copy:\n");
	scanf("%d",&n);
	*(src+(strlen(src)-1))='\0';
	printf("%s",strncopy(dest,src,n));
	free(src);
	free(dest);
	return 0;
}
char *strncopy(char *dest, const char *src,int n)
{	
	char *c=dest;
	int count =0;
	printf("copy of string is:\n");
	while(*src!='\0'){
		count++;
		*dest=*src;
		src++;
		dest++;
		if(count==n){
			break;
			}
	}
	*dest='\0';
	return c;
}
