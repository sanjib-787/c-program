#include"../hdr/header.h"
int main(void)
{
	int num;
	printf("enter a num:");
	scanf("%d",&num);
	if((num&1)==0){
		printf("even\n");
	}
	else{
		printf("odd\n");
	}
	return 0;
}
