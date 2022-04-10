#include<stdio.h>
int main()
{
	float fa[3]={1.0,2.0,3.0},*pf;
	int i;
	pf=fa;
	for(i=0;i<3;i++)
	{
		printf("%f ",*(pf +i));
	}
 } 
