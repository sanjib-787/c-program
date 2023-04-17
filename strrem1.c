#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define size 100
char *strrem(char *str1, const char *str2)
{
	int len;
	char *temp1 = NULL,*temp2 =NULL;
	len = strlen(str2);
	temp1 = str1;
	temp2 = str2;
	while(*str1 != '\0'){
		while(*str2 != '\0' && *str1 == *str2){
			str1++;
			str2++;
		}
		if(*str2 == '\0'){
			str1 = str1-len;
			while(*str1 != '\0'){
				*str1 = *(str1+len);
			//	len++;
				str1++;
			}
		}
		str2 = temp2;
		str1++;
	}	
	printf("%s\n",temp1);
}
int main(void)
{
	char *str1, *str2;
	str1 = (char *)malloc(sizeof(char) * size);
	str2 = (char *)malloc(sizeof(char) * size);
	printf("str1:\n");
	fgets(str1,size,stdin);
	*(str1 + (strlen(str1)-1))='\0';
	printf("substring:\n");
	fgets(str2,size,stdin);
	*(str2 + (strlen(str2)-1))='\0';
	strrem(str1,str2);
}
