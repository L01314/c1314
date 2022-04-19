#include<stdio.h>
int main()
{
	int a,b,c,d;
	double i,j;
	char ch;
	scanf("%d%c%d %d%c%d",&a,&ch,&b,&c,&ch,&d);
 
	 i=((double)a)/b;j=((double)c)/d;
    if(i>j){	printf("%d/%d > %d/%d",a,b,c,d);
	}

	
	if(i<j){	printf("%d/%d < %d/%d",a,b,c,d);
	}

	

    if(i==j)
    {
    		printf("%d/%d = %d/%d",a,b,c,d);
	}

	return 0;
	

}

