//https://blog.csdn.net/milkign/article/details/79594001?spm=1001.2101.3001.6661.1&utm_medium=distribute.pc_relevant_t0.none-task-blog-2%7Edefault%7ECTRLIST%7ERate-1.pc_relevant_default&depth_1-utm_source=distribute.pc_relevant_t0.none-task-blog-2%7Edefault%7ECTRLIST%7ERate-1.pc_relevant_default&utm_relevant_index=1
#include <iostream>
using namespace std;
int a[2223] = { 6,2,5,5,4,5,6,3,7,6 };
const int b[10] = { 6,2,5,5,4,5,6,3,7,6 };
//计算自然数n所需要的火柴数 
int need(int n)
{
	int tmp, num;
	num = 0;
	if (n == 0) return 6;
	while (n > 0)
	{
		tmp = n % 10; num += b[tmp]; n /= 10;
	}
	return num;
}


int main()
{
	int n, A, B, C, D, sum;
	cin >> n; sum = 0;
	for (int i = 10; i < 2223; i++)
		//预处理 
		a[i] = need(i);
	for (int i = 0; i <= 1000; i++)
	{
		for (int j = 0; j <= 1000; j++)
		{
			A = a[i]; B = a[j];
			C = n - 4 - A - B; D = a[i + j]; if (D == C) sum++;
		}
	} cout << sum << endl; system("PAUSE"); 
	return 0;
}

