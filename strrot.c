#include"../hdr/header.h"
int *strrot(const char *,const char *);
int mystrstr(char *str1, const char *str2);
int main(void)
{
	char *str,*rstr;
	str=(char *)malloc(sizeof(char)*MAX_SIZE);
	rstr=(char *)malloc(sizeof(char)*MAX_SIZE);
	printf("enter first string:\n");
	fgets(str,MAX_SIZE,stdin);
	*(str +(strlen(str)-1)) = '\0';
	printf("enter second string:\n");
	fgets(rstr,MAX_SIZE,stdin);
	*(rstr +(strlen(rstr)-1)) = '\0';
	strrot(str,rstr);
	return 0;

}
int mystrstr(char *cptr, const char *str1)
{
	char *temp2;
	printf("cptr %s\n",cptr);
	printf("%s\n",str1);
	temp2 = str1;
	while(*cptr != '\0'){
		while(*str1 != '\0'){
			if(*str1 == *cptr){
				str1++;
				cptr++;
				if(*str1 == '\0'){
					return 1;
				}
			}else{
				break;
			}
		}
		str1 = temp2;
		cptr++;
	}
//	return 0;
}
int *strrot(const char *str,const char *str1)
{
	char *cptr;
	const char *temp, *temp1 ;
	cptr = (char *)malloc(sizeof(char)*MAX_SIZE);
	temp = str;
	temp1 = cptr;
	while(*str != '\0') {
		*cptr = *str;
		cptr++;
		str++;
	}
	str = temp;
	while(*str != '\0') {
		*cptr = *str;
		cptr++;
		str++;
	}
	*(cptr) = '\0';
	str = temp;
	cptr = temp1;
	printf("%d\n",mystrstr(cptr,str1));
}
