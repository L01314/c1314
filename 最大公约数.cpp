#include<stdio.h>
long long  zz(long long  a,long long b)
{
	return b==0?a:zz(b,a%b);
}
int main()
{
	long long  x,y,z;
 scanf("%lld%lld",&x,&y);
	 
	{
			z=zz(x,y);
 printf("%lld %lld ",z,x*y/z);
}
	 return 0; 
}
