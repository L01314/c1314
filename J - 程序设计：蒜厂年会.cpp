#include<stdio.h>
#include<algorithm>
using namespace std;
#define ll long long 
ll f[1001000];
int main()
{
	ll n,i,a,b,sum=0,maxx=-99999999,minn=99999999;
	scanf("%lld",&n);
	for(i=0;i<n;i++)
	{
		scanf("%lld",&f[i]);
		sum+=f[i];
		a=max(a+f[i],f[i]);
		maxx=max(maxx,a);
		b=min(b+f[i],f[i]);
		minn=min(minn,b);
	}
	sum=max(sum-minn,maxx);
	printf("%lld",sum);
	return 0;
}
