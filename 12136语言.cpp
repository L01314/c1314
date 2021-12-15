#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,arr[n];
    for(i = 0;i < n;i++)
    {
        scanf("%d",&arr[i]);
    }

    int new[n],j;                   
    for(int j = 0;j < n;j++)
    {
        new[j] = arr[n-1-i];     
    }
    for(int k = 0;k < n - 1;k++)  
      {
        printf("%d ",new[k]);       
    }
        printf("%d",new[n-1]);  
    return 0;
}