#include"../hdr/header.h"
int string_concat(char *,char *);
int main(void)
{
	char *sptr,*cptr;
	sptr=(char*)malloc(sizeof(char)*MAX_SIZE);
	cptr=(char*)malloc(sizeof(char)*MAX_SIZE);
	printf("enter two string:");
	scanf("%s%s",sptr,cptr);
	string_concat(sptr,cptr);
	free(sptr);
	free(cptr);
//	printf("%s",sptr);
	return 0;
}
int string_concat(char *s,char *c)
{
	int i=0,j=0;
	char *result=malloc(sizeof(char)*MAX_SIZE);		//allocate memory
	while(s[i]!='\0'){								//check the character is null pointer or not
		result[i] = s[i];							//store character one by one in result
		//result++;
		//s++;
		i++;
	}
//	printf("%s",result);
	while(c[j]!='\0'){
		result[i+j] = c[j];
		j++;
		//i++;
		//result++;
		//c++;
		//s++;
//	printf("%s",s);
	}
	result[i+j]='\0';
	printf("%s",result);
	return 0;
}
