#include <stdio.h>
#include <stdlib.h>
/*不要求掌握*/
int main()
{
    int r,c,i,j;
    
    int **a;           /*二维动态数组要利用指向指针的指针，或称为二级指针*/
    printf("row column\n");
    scanf("%d%d",&r,&c);
    a=(int**)malloc(r*sizeof(int*));/* 动态数组名的地址及保存行指针空间*/
  
 
    for(i=0;i<r;i++)  /*每一行的地址传递给每行的行指针*/
    {
        a[i]=(int*)malloc(c*sizeof(int));
    }
 
    printf("input\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
 
    printf("output\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    
    free(a);
 
    return 0;
}
