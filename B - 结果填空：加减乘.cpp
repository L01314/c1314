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
 ���������ʽ�ӽ�����գ�����Ӽ��ˣ�ʹ������ʽ������

1  2  3  4  5  6  7  8  9  10 = 0

�����һ���ж����ַ�������ʹ�ñ��ʽ������
*/
