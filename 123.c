#include <stdio.h>
int main()
{	int a[5],i,*p;
	for(i=0;i<5;i++) scanf("%d",&a[i]);
	for(i=0;i<5;i++)        /*�±귨*/
		printf("a[%d]\t=%d\t",i,a[i]);
	printf("\n");
	for(i=0;i<5;i++) /*ָ�������ʾ��*/ 
		printf("*(a+%d)\t=%d\t",i,*(a+i));
	printf("\n");
	for(p=a;p<a+5;p++) /*ָ�뷨*/
		printf("*p\t=%d\t",*p);
	printf("\n");
	for(p=a,i=0;i<5;i++) /*ָ�������ʾ��*/ 
		printf("*(p+%d)\t=%d\t",i,*(p+i));
	printf("\n");
	for(i=0;i<5;i++)   /*ָ�������ʾ��*/ 
		printf("p[%d]\t=%d\t",i,p[i]);
	getch();
}



