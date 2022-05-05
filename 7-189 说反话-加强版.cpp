#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define inf 0x3f3f3f3f
#define mem(a,b) memset(a,b,sizeof(a))

int main()
{
	string a,s;
	int i,j,next=0,flag;
	getline(cin,a);
	a=' '+a;
	int ff=0;
	for(i=a.length()-1;i>=0;i--)
	{
		if(a[i]==' '&&!next)
			continue;
		if(a[i]!=' '&&!next)
		{
			next=1;
			flag=i;
		}
		if(a[i]==' '&&next)
		{
			if(ff)
				cout<<" ";
			for(j=i+1;j<=flag;j++)
				cout<<a[j];
			ff=1;
			next=0;
		}
	}
	return 0;
}


