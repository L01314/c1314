 
#include<iostream>
#include<cmath> 
using namespace std;
int main()
{
	int n, m, i, x, l,r;
	cin >> n;
	int a[n];
	for (i = 0; i < n; i++)
		cin >> a[i];
	cin >> m;
	while (m--) {
		cin >> x;
		int l = 0; r = n - 1;
		int mid;
		while (l < r - 1) {
			mid = (l + r) / 2;
			if (a[mid] < x)
				l = mid;
			else
				r = mid;
		}
		if (abs(a[l] - x) <= abs(a[r] - x))
			cout << a[l] << "\n";
		else
			cout << a[r] << "\n";
	}
	return 0;
}


