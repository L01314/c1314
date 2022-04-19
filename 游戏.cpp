#include<iostream>
#include<cstdio>
#define double long double
using namespace std;
typedef long long ll;
const int N=110,mod=1000;
int a[N];
void solve()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]); 	
	}
	
	
	int l=-1,r=-1;
	for(int i=0;i<n;i++)
	if(a[i]==0)
	{
		l=i-1; break;
	}
	
	for(int i=n-1;i>=0;i--)
	{
		if(a[i]==0)
		{
			r=i+1; break;
		}
	}
	
	
   if(r==-1) puts("0");
   else printf("%d\n",r-l);
   
}
int main()
{
	int t=1;
	scanf("%d",&t);
	while(t--)
	solve();
	return 0;
}

