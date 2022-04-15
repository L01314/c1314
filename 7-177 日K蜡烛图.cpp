#include<stdio.h>
int main()
{
	double open,high,low,close;
	scanf("%lf%lf%lf%lf",&open,&high,&low,&close);
	if(open>close)
	printf("BW-Solid ");
	else if(open==close)
	printf("R-Cross ");
	else
	printf("R-Hollow ");
	
	
	if(low<open&&low<close)
	printf("with Lower Shadow");
	if(high>open&&high>close)
	printf("and Upper Shadow");
 } 
