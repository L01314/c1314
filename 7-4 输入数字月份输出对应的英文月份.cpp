#include<stdio.h>
int main()
{
    char *s[12]={"January","February","March","April","May","June","July","August","Septemter","October","December"};
    int num;
    scanf("%d",&num);
    num--;
    if(num>12)
    {
    	printf("Illegal month\n");
    	return 0;
	}
    printf("%s",*(s+num));
    return 0;



}
