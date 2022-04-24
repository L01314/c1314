#include<stdio.h>
bool vv(char a)
{
	if(a>='0'&&a<='9') return true;
	else return false;
}
int main()
{
	char n;
	scanf("%c",&n);
	if(vv(n))
		printf("Yes");
	else
		printf("No");
	return 0;
}
