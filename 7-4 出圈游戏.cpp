#include<stdio.h>
int main() {
	int i, k, n, m, y;
	int num[50];
	int *p;
	scanf("%d %d", &n, &y);
	p = num;
	for (i = 0; i < n; i++) {
		*(p + i) = i + 1;
	}
	i = 0;
	k = 0;
	m = 0;
	printf("out No: ");
	while (m < n - 1) {
		if (*(p + i) != 0) {
			k++;
		}
		if (k == y) {
			printf("%3d", *(p + i) );
			*(p + i) = 0;
			k = 0;
			m++;
		}
		i++;
		if (i == n) {
			i = 0;
		}
	}

	printf("\n");
	while (*p == 0) {
		p++;
	}
	printf("The last one is %d\n", *p);
	return 0;
}

//#include<stdio.h>
//int i,j,k=0,t=0,n,m,a[1000];
//int main()
//{
//	scanf("%d %d",&m,&n);
//	for(i=1;i<=m;i++)
//	{
//		a[i]=i;
//	}
//	i=1;
//	while(k!=m-1){
//	t++;
//	if(t!=n)
//	   {
//		a[i+m-t]=a[i];
//		printf("%3d ",a[i]);
//     	}
//
//
//	else
//	{
//
//		k++;t=0;
//	}
//	i++;
//	}
//	printf("The last one is %d\n",a[i+m-k+1]);
//}
