#include<stdio.h>
int main()
{
	unsigned int a;
	char ch;
	printf("enter a hexadecimal number\n");
	scanf("%x",&a);
	for(int i = 0; i < sizeof(a); i++){
		ch = (char )a;
		printf("%x\n",ch);
		a = a >> 8;
	}
	if(ch){
		printf("little endian\n");
	} else{
		printf("big endian\n");
	}
}
