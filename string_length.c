#include"../hdr/header.h"
int string_length(char *p)
{
	int length=0;
	while(*p!='\0'){
		length++;
		p++;
	}
//	printf("length of string is:%d",length-1);
	return length;
}
