#include"../hdr/header.h"
int main(void)
{
	char *sptr,*cptr;
	sptr=(char*)malloc(sizeof(char)*MAX_SIZE);//allocate memory location
	cptr=(char*)malloc(sizeof(char)*MAX_SIZE);
	printf("enter a string:");
	fgets(sptr,MAX_SIZE,stdin);
	printf("enter another string for compare:");
	fgets(cptr,MAX_SIZE,stdin);
	string_compare(sptr,cptr);
//	printf("%s",sptr);
	return 0;
}
