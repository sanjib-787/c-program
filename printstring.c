#include"../hdr/header.h"
int main(void)
{	
	int size=4;
	char **cptr;
	cptr=(char **)malloc(sizeof(char *)*size);
	for(int i=0;i<size;i++){
		//	fgets(cptr[i],MAX_SIZE,stdin);
		*(cptr+i)=(char *)malloc(sizeof(char)*size);
	}
	for(int i=0;i<size;i++){
		//for(int j=0;j<size;j++){
		//	cptr[i][j]='a';
			printf("enter word\n");
			scanf("%s",*(cptr+i));
//		fgets(*(cptr+i)+j,4,stdin);
		//}
	}
	for(int i=0;i<size;i++){
			printf("word is %s\n",*(cptr+i));
	}
	return 0;
}
