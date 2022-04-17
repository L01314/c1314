#include<stdio.h>
#include<string.h>
int main()
{
	char n[1000],b='0';
	int shu,i,len,j;
	gets(n);
	len=strlen(n);
    while(b<='9')
	{ shu=0;
		for(j=0;j<len;j++)
		{
			if(n[j]==b)
				shu++;
		}
		if(shu!=0)
			printf("%c:%d\n",b,shu);
	    b+=1;	
	}
	return 0;
}
