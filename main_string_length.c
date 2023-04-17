#include"../hdr/header.h"
int main(void)
{	
	char *sptr,*cptr;
	//it creates memory allocation
	sptr=(char*)malloc(sizeof(char)*MAX_SIZE);
	printf("entet a string:");
	fgets(sptr,MAX_SIZE,stdin);
	printf("%s",sptr);
	printf("%d\n",string_length(sptr));
	printf("using scanf take string: ");
//	scanf("%s",cptr);
//	printf("%d",string_length(cptr));
	free(sptr);		//deallocate memory
	return 0;
}
