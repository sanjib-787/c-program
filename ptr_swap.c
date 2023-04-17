#include"../hdr/header.h"
void swap(int *a,int *b);
int main()
{
	int a=10,b=20;
	swap(&a,&b);
	return 0;
}
void swap(int *px, int *py){
	int temp;
	temp=*px;
	*px=*py;
	*py=temp;
	printf("%d\t%d",*px,*py);
}

