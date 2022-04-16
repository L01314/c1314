#include<stdio.h>
#include<string.h>
 
int main()
{
	int i,j,n,m;
	scanf("%d%d",&n,&m);
	char arr[n][10]; 	char temp[11];
	for(i=0;i<n;i++) 
    {
		scanf("%s",arr[i]);
	}
	
	for(i=0;i<m;i++)
	for(j=0;j<n-i-1;j++)
	{
		if(strcmp(arr[j],arr[j+1])>0)
		{
			strcpy(temp,arr[j]);
			strcpy(arr[j],arr[j+1]);
			strcpy(arr[j+1],temp);
		}
	} 
	 for (i = 0; i < n; i++)
              {   printf("%s\n", arr[i]);
			  }
        return 0;
 } 
