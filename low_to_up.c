#include"../hdr/header.h"
int main(void)
{
	char *sptr,*cptr;
	sptr=(char *)malloc(sizeof(char)*MAX_SIZE);
	cptr=(char *)malloc(sizeof(char)*MAX_SIZE);
	fgets(sptr,MAX_SIZE,stdin);
	while(*sptr!='\0'){
		if(*sptr>='a'||*sptr<='z'){
			*cptr=*sptr-32;
		}
	}
	printf("%s\n",cptr);
	return 0;
}

