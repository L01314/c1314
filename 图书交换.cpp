#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<cmath>
#include<queue>
#include<map>
#include<set>
#define inf 0x3f3f3f3f
#define ll long long
#define max(a,b) a>b?a:b;
#define min(a,b) a>b?b:a;
using namespace std;
int a[109];
int b[209];
int c[209];
int ans[209];
int main()
{
	int q;
	scanf("%d", &q);
	while(q--) {
		int n;
		memset(ans, 0, sizeof(ans));
		scanf("%d", &n);
		for(int i = 1;i <= n;++i) {
			scanf("%d", &c[i]);
		}
		for(int i = 1;i <= n;++i) {
			b[i] = i;
		}
		int day = 1;int sum = 0;
		while(1) {
			for(int i = 1;i <= n;++i) {
				a[i] = b[i];
			}
			for(int i = 1;i <= n;++i) {
				b[c[i]] = a[i];
			}
			for(int i = 1;i <= n;++i) {
				if(b[i] == i) {
					if(ans[i] == 0) {
						sum++;ans[i] = day;
					}			
				}
			}
			if(sum >= n) {
				break;
			}
			day++;
		}
		for(int i = 1;i <= n;++i) {
			printf("%d ", ans[i]);
		}
		putchar('\n');
	}
	return 0;
}
