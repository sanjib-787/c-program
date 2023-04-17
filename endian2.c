#include <stdio.h>
 
int main(void)
{
	unsigned int value = 0x11223344;
	char *r = (char *) &value;
	printf("%s\n",r);
	int i;
	for(i=0; i<4; i++) {
		printf("Address of 0x%x = %p \n", r[i], &r[i]);
	}
	return 0;
}
