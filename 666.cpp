#include"stdlib.h"
#include"string.h"
#include<stdio.h>     
int main()
{
  int n,b;
  int i,j;
  char a[1001];
  gets(a);
  n=strlen(a);
  for(i=0;i<n;i++)
  {
    b=1;
    for(j=i;j<n;j++)
    if(a[j]=='6'&& a[j+1]=='6')
    b++;
    else break;
    if(b>3&&b<10)
    {
    a[i]='9';
    for(j=i+1;j<=n-b+1;j++)
    a[j]=a[j+b-1];
	n=n-b+1;
    }
     if(b>9)
    {
    a[i]='2';
    a[i+1]='7';
    for(j=i+2;j<=n-b+2;j++)
    a[j]=a[j+b-2];
	n=n-b+2;
    }
  }
  a[n]='\0';
  puts(a);
  return 0;
}

