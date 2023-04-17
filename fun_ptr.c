#include <stdio.h>
int add(int a, int b)
{
	int c;
	c = a+b;
	return c;
}
int main(void){
	int (*funptr)(int, int) = &add;
	(*funptr)(10, 20);
	printf("%d",(*funptr)(10,30));
	return 0;
}
