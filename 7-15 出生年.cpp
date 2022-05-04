#include<stdio.h>
int main() {
	int a, n, ans = 0;
	scanf("%d %d", &a, &n);
	for (int i = a;; i++) {
		int flag = n;
		int b[11] = {0};
		int m = i;
		for (int j = 1; j <= 4; j++) {
			int k = m % 10;
			k /= 10;

			if (b[k] == 0) {
				b[k] = 1;
				flag--;
			}
		}
		if (flag == 0) {
			printf("%d %04d", ans, i);
			break;
		}
		ans++;
	}

}




//#include<stdio.h>
//#include<algorithm>
//#include<string.h>
//using namespace std;
//int main()
//{
//	int n,a;
//	scanf("%d %d",&n,&a);
//	int b[11]={0};
//	int m=n;
//	int flag=1;
//	int ans=0,cnt;
//	while(a)
//	{
//		flag=1;
//		m=n;
//		ans++;
//		memset(b,0,sizeof(b));
//		while(m)
//		{
//			int t=m%10;
//			printf("####%d\n",t);
//			if(b[t]==1)
//			{
//				flag=0;
//				printf("###########\n");
//				break;
//			}
//			else
//			b[t]=1;
//
//			m/=10;
//		}
//		if(flag)
//		{
//			cnt=n;
//			a=0;
//		}
//		n++;
//	}
//	printf("%d %d",ans,cnt);
//}


/*

#include<stdio.h>
int main() {
	int a, n, ans = 0;
	scanf("%d %d", &a, &n);
	for (int i = a;; i++) {
		int flag = n;
		int m = i;
		int b[11] = {0};
		for (int k = 1; k <= 4; k++) {

			//			if(flag==0)
			//			{
			//				break;
			//			}
			int t = m % 10;
			m /= 10;
			//			if(m==0)
			//			{
			//				b[0]=1;
			//				flag--;
			//			}
			if (b[t] == 0) {
				b[t] = 1;
				flag--;
				//				printf("####%d\n",t);
			}
			//			else
			//			continue;
		}
		//		printf("%%%%%%%%%%%%%d\n",flag);
		if (flag == 0) {
			printf("%d %04d", ans, i);
			break;
		}
		ans++;
	}
}


*/
