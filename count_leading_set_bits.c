#include"../hdr/header.h"
unsigned int count_leading_set_bits(unsigned int num)
{
	printf("enter a number:\n");
	scanf("%x",&num);
	int count=0, size;
	size = sizeof(num)*8;
	for(int i = 0; i < size; i++){
		if((num >> i) & 1 == 1){
			count++;
		}
	}
	printf("%d",count);
	return count;
}
