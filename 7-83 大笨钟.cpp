#include<stdio.h>
int main()
{
	int a,b;
	char s;
	scanf("%d:%d",&a,&b);
	if(a<12||(a==12&&b==0))
	{
		printf("Only %02d:%02d.  Too early to Dang.",a,b);
 
	}
	else
	{
		int num=a-12;
		if(b>0) num++;
	for(int i=0;i<num;i++)
     	{
		printf("Dang");
	    }
	
	}
	return 0;
 } 
