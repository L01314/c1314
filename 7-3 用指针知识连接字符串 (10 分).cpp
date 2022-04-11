#include<stdio.h>
void con(char *str1,char *str2,char *p)
{
	int i=0;
	for(;*str1!='\0';)
	{
		*p=*str1; str1++;p++;
	}
	for(;*str2!='\0';)
	{
		*p=*str2; str2++;p++;
	}
	*p='\0';
 } 
 int main()
 {
 	char strings[60];char *p;
 	char str1[100];char str2[100];
 	scanf("%s",str1);
 	scanf("%s",str2);
 	p=strings;
 	con(str1,str2,p);
 	printf("%s\n",p); 
 	return 0;
 }
