#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i,j; char a,b;
	for(i=0;i<n;i++)
	{
		for(j=0;j<4;j++)
		{
			scanf(" %c-%c",&a,&b);// ×¢Òâ¿Õ¸ñ 
			if(b=='T')
			{
				printf("%d",a-'A'+1);
			}
		}
	}
	return 0;
 } 
