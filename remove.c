#include"../hdr/header.h"
int main(void)
{
	char *sptr,*cptr;
	int length=0,count=0,i=0;
	//it creates memory allocation
	sptr=(char*)malloc(sizeof(char)*MAX_SIZE);
	cptr=(char*)malloc(sizeof(char)*MAX_SIZE);
	printf("enter a string:");
	fgets(sptr,MAX_SIZE,stdin);
	while(*sptr!='\0'){
		length++;
		sptr++;
	}
	printf("%d\n",length);
	printf("enter another string:");
	fgets(cptr,MAX_SIZE,stdin);
	for(i=0;cptr[i]!='\0';i++){
		if(cptr[i]=='\n'){
			cptr[i]='\0';
			free(cptr);
			break;
		}
		count++;
	}
	printf("%d\n",count);

	return 0;
}
