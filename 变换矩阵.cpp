#define _CRT_SECURE_NO_WARNINGS
 
#include<cstdio>

#include<iostream>
using namespace std;
bool x[6];
int main()
{
	int n, i, j;
	cin >> n;
	char a[11][11], b[11][11];
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			cin >> b[i][j];
		}
	}
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			if (a[i][j] != b[j][n - i - 1]) x[1] = 1;
			if (a[i][j] != b[n - j - 1][i]) x[2] = 1;
			if (a[i][j] != b[n - 1 - i][n - j - 1]) x[3] = 1;
			if (a[i][j] != b[i][j]) x[4] = 1;

		}
	}
	for (i = 1; i <= 4; i++) {
		if (x[i] == 0) {
			cout << i;
			x[6] = 1;

		}
	}
	if (x[6] == 0) cout << 5;
	/*
	if(a[0][0]==b[0][n-1])
		cout<<1;
	else if(a[0][0]==b[n-1][0])
		cout<<2;
	else if(a[0][0]==b[n-1][n-1])
		cout<<3;
	else if(a[0][0]==b[0][0])
		cout<<4;
	else
		cout<<5;
	*/ 
	return 0;
}
