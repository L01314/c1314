#include<iostream>
#include<cmath>
using namespace std;
double a[5];
bool vv(int x)
{
	int i,j;double b,c;
	if(x==1)
	{
		if(fabs(a[0]-24)<1e-6)
			return true;
		else
			return false;
	}
	for(i=0;i<x;i++)
	{
		for(j=i+1;j<x;j++)
		{
			b=a[i];c=a[j];
			a[j]=a[x-1];
			a[i]=b+c;if(vv(x-1))return true;
			a[i]=b-c;if(vv(x-1))return true;
			a[i]=c-b;if(vv(x-1))return true;
			a[i]=b*c;if(vv(x-1))return true;
			if(c!=0) a[i]=b/c; if(vv(x-1))return true;
			if(b!=0) a[i]=c/b; if(vv(x-1))return true;
			a[i]=b;
			a[j]=c;
		}
	}
	return false;
}
int main()
{
	int t;cin>>t;
	while(t--)
	{
		cin>>a[0]>>a[1]>>a[2]>>a[3];
		if(vv(4))
			cout<<"True";
		
		else
			cout<<"False";
		if(t!=0) cout<<" ";
		
		
	}
	return 0;
}
