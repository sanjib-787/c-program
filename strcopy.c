#include"../hdr/header.h"
char *strcopy(char *,const char *);
int main()
{
	char *dest;
	char *src;
	src=(char*)malloc(sizeof(char)*MAX_SIZE);
	printf("Enter a string:");
	fgets(src,MAX_SIZE,stdin);
	dest=(char*)malloc(sizeof(char)*MAX_SIZE);
	printf("%s",strcopy(dest,src));
	free(src);
	free(dest);
	return 0;
}
char *strcopy(char *dest, const char *src)
{	
	char *c=dest;
	printf("copy of string is:\n");
	while(*src!='\0'){
		*dest=*src;
		src++;
		dest++;
	}
	*dest='\0';
	return c;
}
