#include<stdio.h>
int main(){
	int sum=0,i,j,n,cnt[10001]; 
	char ch[10001][9];  
	scanf("%d",&n);
	getchar();
	for(i=0;i<n;i++){
		scanf("%s %d",&ch[i],&cnt[i]);
		sum+=cnt[i];
	}
	sum=sum/n/2;  
	printf("%d ",sum); 
	int min,flag=0; 
	min=cnt[0]-sum;
	if(min<0){
		min*=-1;  
	}
	for(i=0;i<n;i++){
		j=cnt[i]-sum;
		if(j<0){
			j*=-1; 
		}
		if(j<min){
			flag=i;
			min=j;
		}
	}
	printf("%s",ch[flag]);
}
