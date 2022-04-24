#include<stdio.h>
int main ()
{
	int n,c;
	char s[10];
	scanf("%d",&n);
    c=n;
	getchar();
	while(gets(s)&&s[0]!='E'){
	if(n!=0)
	{
		switch(s[0])
		{
		case'C':printf("Bu\n");break;
		case'J':printf("ChuiZi\n");break;
		case'B':printf("JianDao\n");break;
		}
		n--;	}
	else{
		printf("%s\n",s);
		n=c;
	}
	}
}
