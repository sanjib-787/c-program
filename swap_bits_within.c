#include"../hdr/header.h"
unsigned int swap_bits_within(unsigned int num,unsigned int s,unsigned int d);
int main(void)
{	
	unsigned int num,s,d;
	printf("Enter a number:\n");
	scanf("%d",&num);
	printf("Enter first position:\n");
	scanf("%d",&s);
	printf("Enter second position:\n");
	scanf("%d",&d);
	swap_bits_within(num,s,d);
	return 0;
}
unsigned int swap_bits_within(unsigned int num,unsigned int s,unsigned int d)
{
	
}
