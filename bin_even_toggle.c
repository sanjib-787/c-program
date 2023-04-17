#include"../hdr/header.h"
int main(void)
{
	int num, res=0, count=0;
	printf("Enter a number:\n");
	scanf("%d",&num);
/*	temp=num;
	while(temp>=start){
		temp=start^temp;
		start=start<<2;
	}
	printf("%x",temp);*/
	for(int temp=num; temp>0; temp>>=1){
		if(count % 2==1)
			res=res|(1<<count);
		count++;
	}
	printf("%d\n",num^res);
	return 0;
}
