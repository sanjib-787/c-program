#include"../hdr/header.h"
#include<string.h>
int strcomp(const char *,const char *);
int main(void)
{
	char *sptr,*cptr;
	sptr=(char*)malloc(sizeof(char)*MAX_SIZE);//allocate memory location
	cptr=(char*)malloc(sizeof(char)*MAX_SIZE);
	printf("enter a string:");
	fgets(sptr,MAX_SIZE,stdin);
	printf("enter another string for compare:");
	fgets(cptr,MAX_SIZE,stdin);
	printf("%d",strcomp(sptr,cptr));
//	printf("%s",sptr);
	return 0;
}
int strcomp(const char *s1,const char *s2)
{
	if(strlen(s1)==strlen(s2)){
		for(int i=0;*s1==*s2;i++){
			s1++;
			s2++;
			if(*s1=='\0'&&*s2=='\0')
			break;
		}
		if((*s1=='\0')&& (*s2=='\0')){
			return 1;
		}
		else{
			return 0;
		}
	}
	else{
		return 0;
	}
}
