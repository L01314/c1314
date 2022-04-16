#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
	int n,i,j;
	scanf("%d",&n);
	double avg1,avg,sum=0,sum1=0,a[n];
    for(i=0;i<n;i++)
    {scanf("%lf",&a[i]);
    sum+=a[i];  
	}
	avg=sum/n;
	 
	for(i=0;i<n;i++)
	{
		sum1+=pow((a[i]-avg),2);
	}
	avg1=sum1/n;
	printf("%.5lf",sqrt(avg1));	
}
