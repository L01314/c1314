#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
void in(int** ptr)
{
	**ptr=**ptr+1;
	*ptr=NULL;
	
}
int main()
{
	int count=7;
	int *countptr=&count;
	in(&countptr);
	printf("%p\n",countptr);
	return 0;
}
