
#include <stdio.h> 
#define MAX_TITLE_SIZE 30
#define MAX_AUTHOR_SIZE 40
#define MAX_SIZE 2
//����һ��BOOK�ṹ�壬���ڴ��title,author,price  
struct book
{
   char title[MAX_TITLE_SIZE];
   char author[MAX_AUTHOR_SIZE];
   float price;    
};
int main()
{
    //����һ����������������������Ĵ��� 
    int count=0;
    //��������һ��������������������ʾ�����book 
    int index=0;
    struct book lib[MAX_SIZE];
    printf("�ֻ���Ϣ¼��ϵͳ\n");
    //����صĲ��������������� 
    while(count<MAX_SIZE&&
          printf("�ֻ��ͺ���:")&&gets(lib[count].title)!=NULL && lib[count].title[0]!='\n')
            {
               printf("���쳧��: \t");
               gets(lib[count].author);
               printf("�۸�: \t");
                scanf("%f",&lib[count].price);
                    count++;
                    //�����Ϊ\n���ͼ�����һ�ε��������� 
                while(getchar()!='\n')
                {
                    continue;
                }
            
                if(count<MAX_SIZE)
                {
                    printf("������һ���ֻ���Ϣ\n");
                    
                }
            }
       if(count>0)
        {
            printf("�������ֻ��б�\n");
            //�����ṹ������ 
           for(index=0;index<count;index++)
               {
                printf("�ֻ��ͺ���%s���쳧����%s�۸���%f \n"
                            ,lib[index].title,lib[index].author,lib[index].price);           
               }    
        }
    return 0;
}

