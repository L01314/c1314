#include "stdio.h"

int main()
{
 int i,j,r;
 printf("\n");
 for(i=1;i<9;i++)
 {
 	for(j=1;j<=i;j++)
 	{r=j*i;
 		printf("%d*%d=%-4d  ",i,j,r);
 	}
printf("\n");
 }
 return 0;
 
}