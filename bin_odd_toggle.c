#include"../hdr/header.h"
int main(void)
{
	unsigned int num, res=0, count=0;
	printf("Enter a number:\n");
	scanf("%x",&num);
	for(int temp=num; temp>0; temp>>=1){
		if(count % 2==0)
			res=res|(1<<count);
		count++;
	}
	printf("%x\n",num^res);
	return 0;
}
