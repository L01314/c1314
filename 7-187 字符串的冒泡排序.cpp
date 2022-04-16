#include <stdio.h>
#include<string.h>
void bubble_sort(char arr[], int len,int m) {
        int i, j;
        char temp;
        for (i = 0; i < m; i++)
                for (j = 0; j < len - 1 - i; j++)
                        if (strcpy(arr[j] ,arr[j + 1])>0) {
                               strcpy(temp,arr[j]) ;
                               strcpy(arr[j], arr[j + 1]) ;
                               strcpy(arr[j + 1] , temp);
                        }
}
int main() { 
       	int i,j,n,m,t;
	       scanf("%d%d",&n,&m);
      	char arr[n];	
			for(i=0;i<n;i++)
	     gets(arr[i]);
        bubble_sort(arr, n,m);
    
        for (i = 0; i < n; i++)
                printf("%s ", arr[i]);
        return 0;
}
