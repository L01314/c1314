//cuole  kan²ÂÊı×Ö 

#include<stdio.h>
struct data
{
	char name[10];
	int s;
}xin[100];
int main()
{
	int n,m,i,j,sum=0,av;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s%d",&xin[i].name,&xin[i].s);
		sum+=xin[i].s;
	}
	av=sum/n/2; 
	int min,flag=0;
	min=xin[0].s-av;
	if(min<0) min*=-1;
	for(i=0;i<n;i++)
	{
		j=xin[i].s-av;
		if(j<0) j*=-1;
		if(j<min)
		{
			flag=i;
			min=j; 	 printf("%d %s",av,xin[i].name);
		}
	 } 

	
}




