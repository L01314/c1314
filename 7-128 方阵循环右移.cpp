#include<stdio.h>
int main()
{
    int m,n,i,j;
    scanf("%d%d",&m,&n);
    int a[n][n],b[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
            b[i][(j+m)%n]=a[i][j];
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
           printf("%d ",b[i][j]);
            if(j==n-1&&i!=n-1)
                printf("\n");
        }
    }
    return 0;
}
