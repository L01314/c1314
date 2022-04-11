#include<cstdio> 
#include<algorithm>
#include<cstring>
#include<cmath>
using namespace std;
int n,k,d,a[110],book[110],ans=0,flag=110;

void init()
{
	for(int ff=1;ff<=n;ff++)
		{
			book[ff]=ff;
		}
}

int dai()
{
	//memset(book,0,sizeof(book));
		
	for(int i=0;i<=k-d;i++)
	{
		init();
		for(int j=1+i;j<=d+i;j++)
		{
			if(book[a[j]]==j)
			{
				book[a[j]]=0;
				ans++;
			}
		}
		if(flag>ans)
		{
			flag=ans;
			ans=0;
		}
	}
	return flag;
}

int main()
{
	int tt;
	scanf("%d",&tt);
	while(tt--)
	{
		flag=110;
		scanf("%d %d %d",&k,&n,&d);
		for(int i=1;i<=k;i++)
		{
			scanf("%d",&a[i]);
		}
		int zhiyi=dai();
		printf("%d\n",zhiyi);
	}
	return 0;
}
