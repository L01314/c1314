/*
https://blog.csdn.net/ITmincherry/article/details/108580877


*/
#include <iostream>
using namespace std;
const int N=1e5+10;
int per[N],s[N];
int main(){
    int n,i,j,max=0;
    cin>>n;
    //����ǰ׺��
    for(i=1;i<=n;i++){
        scanf("%d",&per[i]);
        if(per[i]==0) per[i]=-1;
        s[i]=s[i-1]+per[i];
    }
    //�ҳ������Ů������ȵ�������
    for(i=1;i<=n;i++){
        for(j=0;j<i;j++){
            if(s[i]==s[j]){
                if(i-j>max)
                    max=i-j;
                break;
            }
        }
    }
    cout<<max;
    return 0;
}

