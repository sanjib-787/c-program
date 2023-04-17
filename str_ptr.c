#include<stdio.h>
int main(void)
{
	char arr[]="hello world";
	char *ptr=arr;
	char *temp=ptr;
	while(*temp!='\0')
	{
		printf("%c",*temp);
		temp++;
	}
	return 0;
}
