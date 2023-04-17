#include"../hdr/header.h"
char *strinschar(char *, const char ,int );
int main(void)
{
	char *cptr,c;
	int pos;
	cptr=(char *)malloc(sizeof(char)*MAX_SIZE);
	printf("enter a string :\n");
	fgets(cptr,MAX_SIZE,stdin);
	printf("enter a character:\n");
	scanf("%c",&c);
	printf("enter position:\n");
	scanf("%d",&pos);
	strinschar(cptr,c,pos);
	return 0;
}
char *strinschar(char *str, const char c,int pos)
{
	char *temp;
	temp=(char *)malloc(sizeof(char)*MAX_SIZE);
	int count=0;
	while(*(str+count)!='\0'){
		for(count=0;count<pos;count++){
			*(temp+count)=*(str+count);
		}
		*(temp+pos)=c;
		for(count=pos;count<strlen(str);count++){
			*(temp+count+1)=*(str+count);
		}

	}
	printf("%s",temp);
}
