#include<stdio.h>
int i,j,k,temp;
char a[100];
struct node
{
     char name[100];
	 char tele[11];
}s[100];
int main()
{ 
	for(i=0;;i++)
	{
		scanf("%s\n",s[i].name);
		if(s[i].name[0]=='#')
			break;
			scanf("%s\n",s[i].tele);
	}
      scanf("%s",a);
	  for(i=0;;i++)
	  {
		  if(s[i].name==a)
			  printf("%s",s[i].tele);
	  }
}
//}
//#include <stdio.h>
//#include <string.h>
//struct Men
//{
//	char name[50];
//	char phone[20];
//};
//void main()
//{
//	
//	char c[50];
//	struct Men s[50];
//	int i, n;
//	for (i = 0;; i++)
//	{
//		scanf("%s\n", s[i].name);
//		if (s[i].name[0] == '#')
//			break;
//		scanf("%s\n", s[i].phone);
//	}
//	n = i;
//	int flag=0;
//	scanf("%s", c);
//	for (i = 0; i < n; i++)
//	{
//		if (strcmp(s[i].name, c) == 0)
//		{
//			printf("number is %s\n", s[i].phone);
//			flag = 1;
//		}
//		
//	}
//	if (flag == 0) {
//		printf("Not found!");
//	}
//	
//}

