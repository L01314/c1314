#include <stdio.h>
#include <stdlib.h>
/*��Ҫ������*/
int main()
{
    int r,c,i,j;
    
    int **a;           /*��ά��̬����Ҫ����ָ��ָ���ָ�룬���Ϊ����ָ��*/
    printf("row column\n");
    scanf("%d%d",&r,&c);
    a=(int**)malloc(r*sizeof(int*));/* ��̬�������ĵ�ַ��������ָ��ռ�*/
  
 
    for(i=0;i<r;i++)  /*ÿһ�еĵ�ַ���ݸ�ÿ�е���ָ��*/
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
