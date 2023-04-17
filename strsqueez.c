#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define size 100
char *strsqueez(char *str)
{
	char *temp, *temp1;
	temp = str;
	while(*str != '\0'){
		if(*str == *(str+1)){
			temp1 = str;
			while(*str != '\0'){
				*str = *(str+1);
				str++;
			}
			str = temp1;
		} else {
			str++;
		}
	}
	printf("%s",temp);
	return temp;
}
int main(void)
{
	char *str1;
	str1 = (char *)malloc(sizeof(char) * size);
	printf("str1:\n");
	fgets(str1,size,stdin);
	*(str1 + (strlen(str1)-1))='\0';
	strsqueez(str1);
}
