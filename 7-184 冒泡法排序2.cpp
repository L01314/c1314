#include <stdio.h>
void bubble_sort(int arr[], int len,int m) {
        int i, j, temp;
        for (i = 0; i < m; i++)
                for (j = 0; j < len - 1 - i; j++)
                        if (arr[j] > arr[j + 1]) {
                                temp = arr[j];
                                arr[j] = arr[j + 1];
                                arr[j + 1] = temp;
                        }
}
int main() { 
       	int i,j,n,m,t;
	       scanf("%d%d",&n,&m);
      	int arr[n];	
			for(i=0;i<n;i++)
	     scanf("%d",&arr[i]);
        bubble_sort(arr, n,m);
    
        for (i = 0; i < n; i++)
                printf("%d ", arr[i]);
        return 0;
}
