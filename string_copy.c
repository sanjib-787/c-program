#include"../hdr/header.h"
int string_copy(char *s)
{
	int i=0;
	char *c;
	c=(char*)malloc(sizeof(char)*MAX_SIZE);
	while(*(s+i)!='\0'){
		*(c+i)=*(s+i);
		c++;
		s++;
		i++;
//		printf("%c",c);
	}
	*c='\0';
	printf("copy of string is : %s",c);
	return 0;
}
