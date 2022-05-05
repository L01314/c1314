#include<stdio.h>
void move (int num,char x,char z)
{
	printf("%d: %c->%c",num,x,z);
}


void h(int num,char x,char y,char z)
{
	if(num==1)  move(1,x,z);
	else 
	{
		h(num-1,x,z,y); 
		move(num,x,z);
		h(num-1,y,x,z);
	}
}


int main()
{
	int num;
	scanf("%d",&num);
	h(num,'a','b','c');
}
