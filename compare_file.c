#include"../hdr/header.h"
int main(void)
{
	FILE *fp1,*fp2;
	char ch1, ch2;
	int pos = 0, error = 0, line = 0; 
	fp1 = fopen("file1.txt", "r");
	if( fp1 == NULL ) {
		printf("error in opening file1.txt");
		exit(EXIT_FAILURE);
	}
	fp2 = fopen("file2.txt", "r");
	if( fp2 == NULL ) {
		printf("error in opening file2.txt");
		exit(EXIT_FAILURE);
	}
	ch1 = fgetc(fp1);
	ch2 = fgetc(fp2);
	while( ch1 != EOF && ch2 != EOF ){
		pos++;
		if(ch1 == '\n' && ch2 =='\n'){
			line++;
			pos = 0;
		}
		if( ch1 != ch2) {
			error++;
			printf("line :%d\nPosition :%d\n", line, pos);
		}
		ch1 =fgetc(fp1);
		ch2 = fgetc(fp2);
		if(ch1 == EOF && ch2 == EOF){
			printf("no error\n");
		}
	}
}
