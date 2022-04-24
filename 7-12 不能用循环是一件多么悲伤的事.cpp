#include <stdio.h>
int n;
void dfs(int x,int y)
{
	if(x<=n)
	{	
		if(x+y==n)
		{
			printf("%-2d+%2d = %-2d \n",x,y,x+y);
			y=0;
			dfs(x+1,y);
			return ;
		}
		printf("%-2d+%2d = %-2d ",x,y,x+y);
		dfs(x,y+1);
	}
	if(x>n)	return;
	
}
int main()
{
	scanf("%d",&n);
	dfs(0,0);
	return 0;
}



/*
	#include<stdio.h>
int main()
{
	int n,i,k,j,sum;
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=n;j++)
		{    sum=i+j;
			if(sum<5)
				printf("%-2d+%2d = %-2d ",i,j,sum);
			if(sum==5)
				printf("%-2d+%2d = %-2d \n",i,j,sum);
		}
	}
	
}
*/
