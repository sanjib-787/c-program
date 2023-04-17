#include"../hdr/header.h"
int main(void)
{
	unsigned int num;
	register unsigned int r1,r2,r3,r4;
	printf("enter a number:\n");
	scanf("%x",&num);
	r1=num<<22;
	r1=r1>>22;
	r2=num<<12;
	r2=r2>>22;
	r2=r2<<10;
	r3=num>>20;
	r3=r3<<20;
	printf("%x\n",r1);
	printf("%x\n",r2);
	printf("%x\n",r3);
	//printf("r4 %x\n",r4);
	return 0;
}
