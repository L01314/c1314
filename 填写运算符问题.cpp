 #include<iostream>
 
int main()
{
	int j, i[5];		// 循环变量，数组i用来表示4个运算符
	int sign;			// 累加运算时的符号；
	int result;			// 保存运算式子的结果值
	int count=0;		// 计数器，统计符合条件的方案
	int num[6];			// 保存操作数
	float left, right;  //保存中间结果
	char oper[5] = { ' ','+','-','*','/' };   //运算符
 
	printf("输入5个数，之间用空格隔开：");
	for (j = 1; j <= 5; j++)
		scanf("%d",&num[j]);
	printf("输入结果：");
	scanf("%d",&result);
	//注：这里i[1]代表的第一个运算符的意思，i[1]=1代表第一个运算符是“+”，i[1]=2代表第一个运算符是“减”，i[1]=3代表第一个运算符是“-”，i[1]=4代表第一个运算符是“/”
	//注：这里i[2]代表的第二个运算符的意思，i[2]=1代表第二个运算符是“+”，i[2]=2代表第二个运算符是“减”，i[2]=3代表第二个运算符是“-”，i[2]=4代表第二个运算符是“/”
	//i[3],i[4]依次类推。
	for (i[1]=1; i[1]<=4; i[1]++)    //循环4种运算符，1表示+，2表示-，3表示*，4表示/
	{
		if ((i[1]<4) || (num[2] != 0))	//运算符若是/,则第二个运算数不能为0，（注：“||”是或运算，两个条件至少要有一个成立，即第一个运算符为/时，第二个运算数不为0）
		{
			for (i[2]=1; i[2]<=4; i[2]++)
			{
				if ((i[2]<4)||(num[3]!= 0))		//当第二个运算符为/时，第三个运算数不为0
				{
					for (i[3] = 1; i[3] <= 4; i[3]++)
					{
						if ((i[3] < 4) ||( num[4] != 0))	//当第三个运算符为/时，第四个运算数不为0
						{
							for (i[4] = 1; i[4] <= 4; i[4]++)
							{
								if ((i[4] < 4) || (num[5] != 0))	//当第四个运算符为/时，第五个运算数不为0
								{
									left = 0;
									right = num[1];
									sign = 1;
									//使用case语句，将4种运算符填到对应的空格位置，并进行计算
									for (j = 1; j <= 4; j++)
									{
										switch (oper[i[j]])
										{
										case '+':
											left = left + sign*right;
											sign = 1;
											right = num[j + 1];
											break;
										case '-':
											left = left + sign*right;
											sign = -1;
											right = num[j + 1];
											break;
										case '*':
											right = right*num[j + 1];
											break;
										case '/':
											right = right / num[j + 1];
											break;
										}
									}
									//开始判断，如果运算式子的结果和输入的结果相同，则表示找到一种算法，并输出这个解
									if (left + sign*right == result)
									{
										count++;
										printf("%3d:",count);
										for (j = 1; j <= 4; j++)
											printf("%d%c",num[j],oper[i[j]]);
										printf("%d=%d\n",num[5],result);
									}
								}
							}
						}
 
					}
				}
			}
		}
	}
	if (count == 0)
		printf("没有符合要求的方法！\n");
	system("pause");
	return 0;
}
