#include<iostream>
using namespace std;
struct stu{
	int sex;
	string name;
}; 
int main()
{
	int n,flag[1000]={0};
	cin>>n;
	STU stu[n]={0};
	for(int i=0;i<n;i++)
	{
		cin>>stu[i].sex>>stu[i].name;
	}
	for(int i=0;i<n;i++)
	{
		cout<<stu[i].name<<" ";
		for(int j=N-1;j>=N/2;j--)
		{
			if(flag[j]==0&&stu[j].sex!=stu[i].sex)
			{
				cout<<stu[j].name<<endl;
				flag[j]=1;
				break;
			}
		}
	}
}
