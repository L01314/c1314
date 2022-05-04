#include<stdio.h>
int main() {
 long long int n,m;
 int i=0,x,y;
 char a[20],b[20];
 scanf("%lld",&n);
 m=n*2;
 while(n)
 {
	 a[i++]=n%10;
	 n/=10;
 }
 x=i;
 i=0;
 while(m)
 {
	 b[i++]=m%10;
	 m/=10;
 }
 y=i;i=0;
 if(x!=y)
 {   printf("No\n");
	 printf("%lld",m);
	 return 0;
 }
 else
 {
	  for(i=0;i<x;i++)
	  {
		  for(j=0;j<y;j++)
		  {
			  if(a[i]==b[j])
			  {
				  z++;
			  }
		  }
	  }
	 
	 
	 
	 
 }
	
 
	return 0;
}
