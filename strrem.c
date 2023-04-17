#include"../hdr/header.h"
char *strrem(char *,const char *);
int main(void)
{	char *str,*sstr;
	str=(char*)malloc(sizeof(char)*MAX_SIZE);
	sstr=(char*)malloc(sizeof(char)*MAX_SIZE);
	printf("Enter a string:\n");
	fgets(str,MAX_SIZE,stdin);
	printf("Enter a substring:\n");
	fgets(sstr,MAX_SIZE,stdin);
	*(str+(strlen(str)-1))='\0';
	*(sstr+(strlen(sstr)-1))='\0';
	strrem(str,sstr);
	free(str);
	free(sstr);
	return 0;
}
char *strrem(char *str,const char *sstr)
{
	char *temp;
	int i=0,k,j=0,found=0,ls,lss;
	int flag=0;
	ls=strlen(str);
	lss=strlen(sstr);
	for(int i=0;i<ls;i++){
		k=i;
		for(j=0;j<lss;j++){
			if(*(str+i)==*(sstr+j))
				i++;
		}
		found=i-k;
		if(found==lss){
			i=k;
			for(j=i;j<(ls-lss);j++){
				*(str+j)=*(str+j+lss);
			}
			ls=ls-lss;
			*(str+j)='\0';
		}
	}
	printf("%s",str);
	/*for(int i=0;str[i]!='\0';i++){
		k=i;
		printf("%c\n",*str);
		while(str[i]==sstr[j]){
			i++;
			j++;
			if(j==strlen(sstr)){
				printf("sstr is%s\n",sstr);
				flag=1;
				break;
			}
		}
		j=0;
	
		if(flag==0){
			i=k;
		}
		else{
			flag=0;
		}
		temp[n++]=str[i];
	}
	temp='\0';
	printf("%s",temp);*/
	return str;
}
