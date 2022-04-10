 #include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;

int n,m;
int a[100200];

int main(){
	cin >> n >> m;
	for(int i=0;i<n;i++){ 
		scanf("%d",&a[i]);
	}
	sort(a,a+n);
	for(int i=0;i<m;i++){
		int x; 
		scanf("%d",&x); 
		if(x<a[0]){
			printf("-1\n");
			continue;
		}else if(x>=a[n-1]){
			printf("%d\n",a[n-1]);
			continue;
		}else if(x==a[0]){
			printf("%d\n",a[0]);
			continue;
		}
		int ans=-1;
		int left=0,right=n-1;
		while(left<=right){ 
			int mid=(left+right)>>1;
			if(a[mid]<=x){
				ans=a[mid];
				left=mid+1;
			}else{
				right=mid-1;
			}
		}
		printf("%d\n",ans);
	}
	return 0;
}

