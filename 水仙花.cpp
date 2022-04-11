 #include<stdio.h>
 long long pow(int a,int b)
 {
   long long int sum=1;
 	for(int i=1;i<=b;i++)
    {
    	sum*=a; 
	}
	return sum;
 }
 int main()
 {
 	int n,i,j,t=0;
 	long long ssum;
 	scanf("%d",&n);
 	for(i=pow(10,n-1);i<=pow(10,n)-1;i++)
 	{
 		int a=i;ssum=0;
 		for(int b=1;b<=n;b++)
 		{
 			
 			t=a%10;
 			a/=10;
 			ssum+=pow(t,n);
		 }
		 if(ssum==i)
		 printf("%d\n",i);
	 }
  } 
