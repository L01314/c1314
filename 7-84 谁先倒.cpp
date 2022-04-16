#include<stdio.h>
int main()
{
	int A,B, n,a1=0,a2=0,b1=0,b2=0;
	scanf("%d%d%d",&A,&B,&n);
    int a=A,b=B; 
	while(n--)
	{
		scanf("%d %d %d %d",&a1,&a2,&b1,&b2);
		if((a2==a1+b1)&&(a2!=b2))
		{
			a--;
		 } 
		 if((b2==a1+b1)&&(a2!=b2))
		 {
		 	b--;
		 }
		 if(a<0)
		 {
		 	printf("A\n%d",B-b);
		 	break;
		 }
	     if(b<0)
	     {
	     	printf("B\n%d",A-a);
		    break;
		 }
	}
	return 0;
}

/*

#include<stdio.h>
int main()
{	
	int A,B,N;
	scanf("%d %d %d",&A,&B,&N);
	int a=A,b=B;
	int a1=0,a2=0,b1=0,b2=0;
	while(N--)
	{
        scanf("%d %d %d %d",&a1,&a2,&b1,&b2);
		if((a2==a1+b1)&&(a2!=b2))
		{
			a--;
		}
		if((b2==a1+b1)&&(a2!=b2))
		{
			b--;
		}
		if(a<0)
		{ 
            printf("A\n%d",B-b);
			break;
		}
		if(b<0)
		{
            printf("B\n%d",A-a);
			break;
		}	
	} 	
    return 0;
}
 */
