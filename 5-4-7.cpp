#include<stdio.h>
int main()
{char a[]="****************";
	int i,j,k;
	for(i=0;i<5;i++)
	{
		printf("\n");
		for(j=0;j<i;j++)
		printf("%c",' ');
		for(k=0;k<5;k++)
		printf("%c",a[k]);
	}
	return 0;
}
