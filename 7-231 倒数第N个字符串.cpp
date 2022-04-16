#include<stdio.h>
#include<math.h>
int main()
{
	int n,m,i,sum;
	scanf("%d %d",&n,&m);
	int a[n];
	sum=(int)pow(26,n)-m;
	for(i=n-1;i>=0;i--)
	{
		a[i]=sum%26;
		sum=(sum-a[i])/26;
	 } 
	 for(i=0;i<n;i++)
	 {
	 	printf("%c",'a'+a[i]);
	  } 
	  return 0;
 } 
