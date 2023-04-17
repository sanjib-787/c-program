#include"../hdr/header.h"
int main(void)
{
	int var1,var2;
	int res=~var1;
	scanf("%d%d",&var1,&var2);
	printf("and %d\n",var1&var2);
	printf("or %d\n",var1|var2);
	printf("xor %d\n",var1^var2);
	printf("complement %d\n",res);
	return 0;
}
