#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 100
int strpalin(char *str)
{
	char *temp1,*temp2;
	int len = strlen(str);
	temp1 = (char *)malloc(sizeof(char) * len);
	temp2 = temp1;
	while(len != 0) {
		*temp1 = *(str + (len-1));
		len--;
		temp1++;
	}
	temp1 = temp2;
	printf("temp1 %s\n",temp1);
	while(*str != '\0' && *temp1 != '\0') {
		if(*str == *temp1){
			str++;
			temp1++;
			if(*str=='\0' && *temp1 == '\0') {
				printf("it is a pallindrome\n");
			}
		} else {
				printf("it is not a pallindrome\n");
				break;
		}
	}

}
int main(void) {
	char *str;
	str = (char *)malloc(sizeof(char) * SIZE);
	printf("s1:\n");
	scanf("%s",str);
	strpalin(str);
}
