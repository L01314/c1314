#include<stdio.h>
#include<string.h>

int main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	char a[n][11],b[11];
	for (int i = 0; i < n ; i++)
	{
		scanf("%s",a[i]);
	}
	for (int i = 0 ; i < m  ; i++)
	{
		for (int j = 0; j < n - i -1 ; j++)
		{
			if(strcmp(a[j],a[j+1]) > 0)
			{
				strcpy(b,a[j]);
				strcpy(a[j],a[j+1]);
				strcpy(a[j+1],b);
			}
		}	
	}
	for (int i = 0; i < n; i++)
	{
		printf("%s\n",a[i]);
	}
	
return 0;
}

