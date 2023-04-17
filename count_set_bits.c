#include"../hdr/header.h"
unsigned int count_set_bits(unsigned int num)
{
	int count=0,size;
	size=sizeof(num)*8;
	printf("enter a number:\n");
	scanf("%d",&num);
	while(num != 0){
		if((num & 1)==1){
			count++;
			printf("%d", count);
			}
		num=num>>1;
	}
	printf("%d",count);
	return count;
}
