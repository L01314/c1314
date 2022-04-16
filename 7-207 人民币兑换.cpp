#include<stdio.h>
int main()
{
	int n;
	int i,j,k,a,b,c;
	scanf("%d",&n);
	for(a=1;a<=n;a++)
	    for(b=50;b>1;b--)
		{
			if((a*5+b*2+(100-a-b))==150)
			printf("%d %d %d\n",a,b,100-a-b);
		 } 	
	return 0;
	
}
