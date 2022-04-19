#include <stdio.h>
void average(float (*p)[4],int n)     /* 形参p为指向数组元素的指针变量 */
{
    int i,j;
    float sum=0,aver;
    for(i=0;i<n;i++)
    {
    	for(j=0;j<4;j++)
    	{
    		sum=sum+*(*(p+i)+j);
    	}
    }  
    aver=sum/(n*4);
    printf("总平均分为:%5.1f\n",aver);
}
void search(float (* p)[4],int n) /* 形参p为指向有4个元素组成的一维数组的指针变量*/
{
    int i;
    printf("第%d个学生的成绩为:\n",n);   /* 学生编号从1开始，实参为2表示第2个学生 */
    for(i=0;i<4;i++)
        printf("%5.1f ",*(*(p+n-1)+i));   /* 实际上是二维数组中1行的成绩（从0行开始） */
    printf("\n");
}
int main()
{
    float score[3][4]={	{85,97,80,100},	{89,87,90,81},{90,99,86,98}};
    average(score,3);         
    search(score,2);          /* 实参score为行指针，即0行首地址 */
    return 0;
}
