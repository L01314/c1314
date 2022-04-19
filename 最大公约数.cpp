#include<stdio.h>
int zz(int a,int b)
{
	return b==0?a:zz(b,a%b);
}
int main()
{
	int x,y,z;
	while(~scanf("%d%d",&x,&y))
	 
	{
			z=zz(x,y);
 printf("%d",z);
}
	 return 0; 
}
