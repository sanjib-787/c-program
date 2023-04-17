#include<stdio.h>
int main(void)
{
	FILE *fp;
	fp = fopen("abc.txt", "r");
	int count = 0;
	fseek(fp, 0 ,SEEK_END);
	count = ftell(fp);
	printf("count is %d\n",count);
	fclose(fp);
	return 0;
}
