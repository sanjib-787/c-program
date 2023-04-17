#include"../hdr/header.h"
int main(unsigned int n)
{
	scanf("%d",&n);
	for(int i=31; i>=0; i--){
		if((1<<i)&n)
			printf("1");
		else
			printf("0");
	}
	return 0;
}
