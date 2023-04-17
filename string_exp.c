#include"../hdr/header.h"
#include<string.h>
#include<stdlib.h>

char *cstr = "GLOBAL";	//stored in initialized data segment
char *str;
char *dstr;			//stored in bss because its uninitiliazed data segment
int main(void)
{
//	char *str;			//stored in bss because its uninitiliazed data segment
	str = (char *)malloc(100*sizeof(char));		//heap
	printf("0x%08x\n", str);
	str = "EDGE";		//data segment
	printf("str = 0x%08x\n", str);
	dstr = malloc(10);
	printf("dstr = 0x%08x\n", dstr);
	dstr="software";
	str="sanjib";
	//strcpy(dstr, "SOFTWARE");
	printf("dstr 0x%08x\n", dstr);
	printf("str 0x%08x\n", str);
	printf("freeing str");
	
//	printf("pid = %d\n", getpid());
//	getchar();

	free(str);
	printf("freeing dstr");
	free(dstr);	
	return 0;
}
