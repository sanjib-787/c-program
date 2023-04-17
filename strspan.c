#include"../hdr/header.h"
int strspan(const char *,char *);
int main(void)
{
	char *sptr,*cptr;
	int n;
	sptr=(char*)malloc(sizeof(char)*MAX_SIZE);
	cptr=(char*)malloc(sizeof(char)*MAX_SIZE);
	printf("enter first string:");
	fgets(sptr,MAX_SIZE,stdin);
	printf("enter second string:");
	fgets(cptr,MAX_SIZE,stdin);
	*(sptr+(strlen(sptr)-1))='\0';
	*(cptr+(strlen(cptr)-1))='\0';
	printf("%d",strspan(sptr,cptr));
	free(sptr);
	free(cptr);
	return 0;

}
int strspan(const char *s1,char *s2)
{
	int count=0;
	char *temp;
	temp=s2;
	while(*s1!='\0'){
		while(*s2!='\0'){
	//	s2=temp;
			if(*s1==*s2){
				count++;
			}
		/*	else if(*s2!='\0'){
				s2++;
			}*/
			else{
				break;
			}
			s2++;
		}
		s1++;
	s2=temp;
	}
	return count;
}
