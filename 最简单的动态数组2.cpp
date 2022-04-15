#include "stdio.h"
#include "stdlib.h"
int main()
{
	int x,i,y;
	
	/*int *p;*/
	float *p,*p1;
	scanf("%d",&x);
	/*p=(int*)malloc(x*sizeof(int));*/  /*如果申请其他类型怎么办 */
	
	p=(float *)malloc(x*sizeof(float));
	if(p==NULL)
	{
		printf("no\n");
		exit(0);
	}
	for(i=0;i<x;i++)
	   /*scanf("%d",p+i);*/
	   scanf("%f",p+i);
	
	for(i=0;i<x;i++)
	   printf("%5.1f",p[i]);
	    /*printf("%5d",p[i]);*/ 
	scanf("%d",&y);
	p1=(float*)realloc(p,y*sizeof(float));
	if(p1==NULL)
	{
		printf("no\n");
		exit(0);
	}
	
	for(i=x;i<y;i++)   /*i=0  不保留原来的数据，覆盖掉
	                     i=x  保留原来的数据*/
	  scanf("%f",p1+i);
	
	for(i=0;i<y;i++)
	   printf("%5.1f",p1[i]);
	   
	free(p);
	free(p1);
    return 0;   
}
