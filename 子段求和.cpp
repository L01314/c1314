#define _CRT_SECURE_NO_WARNINGS
 
#include<iostream>
using namespace std;

long long int a[50005];
int main()
{
	int m, n;
	int i, l,r;
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		cin >> a[i];
		a[i] += a[i - 1];
	}
	cin >> m;
	while (m--)
	{
		cin >> r>> l;
		cout << a[l + r - 1] - a[r - 1] << endl;

	}
	return 0;
}
