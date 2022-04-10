#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
long long  n, m;
long long a[1000009], b[1000009]; 
int main()
{
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	sort(a + 1, a + n + 1);
	for (int q = 1; q <= m; q++)
	{
		int x;
		cin >> x;
		int l = 1, r = n; 
		int mid;
		while (l <= r)
		{
			mid = (l + r) / 2;
			if (a[mid] <= x)
				l = mid + 1; 
			else
				r = mid - 1;
		}
		if (a[l] > x)
	 
			cout << a[l] << endl;
		else
		 	cout << "-1" << endl;
	}
	return 0;
}

