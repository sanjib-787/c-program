#include"../hdr/header.h"
int strpalin(char *);
int main()
{
	char *sptr;
	sptr=(char*)malloc(sizeof(char)*MAX_SIZE);
	printf("Enter a string:");
	fgets(sptr,MAX_SIZE,stdin);
	*(sptr+(strlen(sptr)-1))='\0';
	printf("%d",strpalin(sptr));
	return 0;
}
int strpalin(char *p)
{
	char *temp;
	temp=(char*)malloc(sizeof(char)*MAX_SIZE);
	char *temp1=temp;
	printf("reverse of string is: ");
	for(int i=strlen(p)-1;i>=0;i--){
		*temp=*(p+i);
		//printf("%c",*temp);
		temp++;
//		return p;
	}
	temp='\0';
	printf("%s\n",temp1);
	printf("%s\n",p);
	//temp=temp1;
		for(;*temp1==*p;temp1++,p++){
			if(*temp1=='\0'&&*p=='\0')
			break;
		}
		if(*temp1=='\0'&&*p=='\0'){
			return 1;
		}
		else{
			return 0;
		}
}
