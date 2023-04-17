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
	strindex(ptr,c);
	printf("%d",strindex(ptr,c));
	free(ptr);
	return 0;
}
int strindex(char *p,char c)
{
	int index=0;
	while(*p!='\0'){
		if(*p==c){
			return index;
		}
		index++;
		p++;
	}
	if(*p == '\0'){
		printf("char is not present.\n");
		exit(EXIT_FAILURE);
	}
	//return index;
}
