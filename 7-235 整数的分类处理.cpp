#include<stdio.h>
int main()
{
	int n,a2=0,a3=0,i,x,max=0,sum=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&x);
		if(x%3==0&&x>max) 
			max=x;	
		if((x-1)%3==0)	 
			a2++;
		if((x-2)%3==0)	 
		{	a3++;	sum+=x;	}
	}
	if(max==0)	printf("NONE "); 
	else		printf("%d ",max);
	if(a2==0)	printf("NONE ");
	else		printf("%d ",a2);
	if(sum==0)	printf("NONE");
	else		printf("%.1f",sum*1.0/a3);
	return 0;
}

