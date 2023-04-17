#include"../hdr/header.h"
#define SIZE 50
int main(void)
{
	char *cptr1, *cptr2, *cptr3, *temp1, *temp2, *tempcptr3;
	int count = 0, len1, len2, len3, arr[SIZE], top = 0, pos;
	cptr1 = (char *)malloc(sizeof(char) * SIZE);
	cptr2 = (char *)malloc(sizeof(char) * SIZE);
	cptr3 = (char *)malloc(sizeof(char) * SIZE);
	printf("enter a line\n");
	fgets(cptr1, SIZE, stdin);
	*(cptr1 + (strlen(cptr1) -1 )) = '\0';
	printf("enter a character to be find\n");
	fgets(cptr2, SIZE, stdin);
	*(cptr2 + (strlen(cptr2) -1 )) = '\0';
	printf("enter a word to implement\n");
	fgets(cptr3, SIZE, stdin);
	*(cptr3 + (strlen(cptr3) -1 )) = '\0';
	len1 = strlen(cptr1);
	len2 = strlen(cptr3);
	len3 = len2;
	temp1 = cptr1;
	temp2 = cptr1;
	tempcptr3 = cptr3;
/*	while( *temp1 != '\0') {
		count++;
		if( *temp1 == *cptr2){
			arr[top] = count;
			top++;
		}
		temp1++;
	}
	printf("where you want to insert in position:\n");
	for(int i = 0; i < top; i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
	scanf("%d",&pos);
	temp1 = cptr1;
//	for(int i = 0; i < top; i++){*/
	while( *temp1 != '\0' ){
		if( *temp1 == *cptr2) {
			temp2 = cptr1 + len1 - 1;
			for( int i = 0; temp1 < temp2; i++ ){
				*(temp2 + ( len2 - 1 )) = *(temp2);
				temp2--;
				//printf("%s", cptr1);
			}
			while(len3){
				*temp1 = *tempcptr3;
				temp1++;
				tempcptr3++;
				len3--;
			}

		}
		temp1++;
	}
//	}
	printf("%s", cptr1);
	return 0;
}
