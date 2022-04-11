#include<stdio.h>
int f[11]={0,1,2,3,4,5,6,7,8,9,10};
int a_b(int a,char c,int b)
{
	if(c=='+') return a+b;
	else return a-b;
}
int dfs(int a,char c,int b,int cnt)
{
	if(cnt ==11) 
	{
		if(a_b(a,c,b)==0) return 1;
		else return 0; 
	 } 
	 int res=0;
	 res +=dfs(a_b(a,c,b),'+',f[cnt],cnt+1);
	 res +=dfs(a_b(a,c,b),'-',f[cnt],cnt+1);
	 res +=dfs(a,c,b*f[cnt],cnt+1);
	 return res;
}
int main()
{
	printf("%d",dfs(0,'+',1,2));
	return 0;
 } 
 
 /*
 请对于下面式子进行填空，填入加减乘，使这个表达式成立。

1  2  3  4  5  6  7  8  9  10 = 0

请输出一共有多少种方案可以使得表达式成立。
*/
