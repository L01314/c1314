#include <stdio.h>
void average(float (*p)[4],int n)     /* �β�pΪָ������Ԫ�ص�ָ����� */
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
    printf("��ƽ����Ϊ:%5.1f\n",aver);
}
void search(float (* p)[4],int n) /* �β�pΪָ����4��Ԫ����ɵ�һά�����ָ�����*/
{
    int i;
    printf("��%d��ѧ���ĳɼ�Ϊ:\n",n);   /* ѧ����Ŵ�1��ʼ��ʵ��Ϊ2��ʾ��2��ѧ�� */
    for(i=0;i<4;i++)
        printf("%5.1f ",*(*(p+n-1)+i));   /* ʵ�����Ƕ�ά������1�еĳɼ�����0�п�ʼ�� */
    printf("\n");
}
int main()
{
    float score[3][4]={	{85,97,80,100},	{89,87,90,81},{90,99,86,98}};
    average(score,3);         
    search(score,2);          /* ʵ��scoreΪ��ָ�룬��0���׵�ַ */
    return 0;
}
