#include"../hdr/header.h"
int string_reverse(char *);
int main()
{
	char *sptr;
	sptr=(char*)malloc(sizeof(char)*MAX_SIZE);
	printf("Enter a string:");
	fgets(sptr,MAX_SIZE,stdin);
	string_reverse(sptr);
	return 0;
}
int string_reverse(char *p)
{
	printf("reverse of string is: ");
	for(int i=string_length(p)-1;i>=0;i--){
		printf("%c",p[i]);
	}
	printf("\n");
	return 0;
}
