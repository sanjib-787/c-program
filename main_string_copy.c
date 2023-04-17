#include"../hdr/header.h"
int main(void)
{
	char *sptr;
	sptr=(char*)malloc(sizeof(char)*MAX_SIZE);
	printf("Enter a string:");
	fgets(sptr,MAX_SIZE,stdin);
	printf("%s",sptr);
	string_copy(sptr);
	free(sptr);
	return 0;
}

