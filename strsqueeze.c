#include"../hdr/header.h"
char *strsqueeze(char *);
int main(void)
{
	char *cptr;
	cptr=(char *)malloc(sizeof(char)*MAX_SIZE);
	printf("Enter a string:\n");
	fgets(cptr,MAX_SIZE,stdin);
	*(cptr+(strlen(cptr)-1))='\0';
	strsqueeze(cptr);
	return 0;
}
char *strsqueeze(char *str)
{
	char *temp;
	temp=str;
	temp++;
	while(*str!='\0'){
		if(*str==*temp){
			str++;
			temp++;
		}
		else{
			printf("%c",*str);
			str++;
			temp++;
		}
	}
	/*for(int i=0;i<strlen(str);i++){
		for(int j=i+1;*(str+j)!='\0';j++){
			if(*(str+j)==*(str+i)){
				for(int k=j;*(str+k)!='\0';k++){
					*(str+k)=*(str+k+1);
				}
			}
		}
	}*/
}
