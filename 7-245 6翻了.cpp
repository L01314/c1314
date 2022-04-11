#include<stdlib.h>
#include<stdio.h>
#include<string.h>
int main()
{
	int b,i,j,len;
	char str[1005];
	gets(str);
	len=strlen(str);
	for(i=0;i<len;i++)
	{
		b=1;  
		for(j=i;j<len;j++)
			if(str[j]=='6'&&str[j+1]=='6')  b++;
			else  break;
			if(b>3&&b<10)
			{
				str[i]='9';
				for(j=i+1;j<=len-b+1;j++)
				str[j]=str[j+b-1];
				len=len-b+1; 
			}
			if(b>9)
			{
				str[i]='2';str[i+1]='7';
				for(j=i+2;j<=len-b+2;j++)
				str[j]=str[j+b-2];
				len=len-b+2;
			}
			
	}
	str[len]='\0';  
	puts(str);
	return 0;
}
