#include<stdio.h> 
int main()
{
	int a[5000]={0};
	int n,k,j,sum=0;	int c=0;
	scanf("%d%d",&n,&k);
	for(int i=n;i>1;i--)
	{
	   int p=1;
		for(j=2;j<i;j++)
		{
			if(i%j==0) {
				p=0;
				break;
			}
		}
            if(p==1){
            	a[c]=i;
			   c++;
			}
			if(c==k)
		{	break;
			}
			
	}
	for(int i=0;i<c;i++)
	{
		sum+=a[i];
	}
	for(int i=0;i<c-1;i++)
	{
		printf("%d+",a[i]);
	}
	printf("%d=%d",a[c-1],sum);
	return 0; 
	
	
 } 
