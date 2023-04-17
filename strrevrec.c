#include"../hdr/header.h"
char *strrevrec(char *,int);
int main(void){
	char *cptr;
	cptr=(char *)malloc(sizeof(char)*MAX_SIZE);
	fgets(cptr,MAX_SIZE,stdin);
	int length=strlen(cptr);
	*(cptr+(strlen(cptr)-1))='\0';
	strrevrec(cptr,length);
	return 0;
}
char *strrevrec(char *cptr,int length){
	if(length>=0){
		printf("%c",*(cptr+length));
		length--;
		strrevrec(cptr,length);
	}
}
