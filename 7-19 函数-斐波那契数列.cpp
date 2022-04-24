
#include<stdio.h>
double a[100000];
int main()
{
	int n;
	scanf("%d",&n);
	a[0]=1;a[1]=1;a[2]=2;
	for(int i=2;i<=n;i++)
	{
		a[i]=a[i-1]+a[i-2];
	}
	printf("%.0f",a[n-1]);
}

/*#include<stdio.h>

int vv(int a)
{
	int i;
	if(a==1)i=1;
	else if(a==2)i=1;
	else i=vv(a-2)+vv(a-1);
    return i;
}
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",vv(n));
	return 0;
}*/

