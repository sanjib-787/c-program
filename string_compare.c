#include"../hdr/header.h"
int string_compare(char *s, char *c)
{
	for(;*s==*c;s++,c++){
		if(*s=='\0'||*c=='\0')
		break;
	}
	if(*s=='\0'){
		printf("true");
	}
	else{
		printf("false");
	}
	return 0;
}
