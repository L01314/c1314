#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int main() {
	int n;
	char str[1001];
	scanf("%d", &n);
	getchar();
	gets(str);
	int len = strlen(str);
	int L = len % n;
	if (L != 0)
		L = len / n + 1;
	else
		L = len / n;
	int cnt = 0;
	char  a[101][101];
	for (int j = L - 1; j >= 0; j--)
		for (int i = 0; i < n; i++) {
			a[i][j] = str[cnt++];
		}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < L; j++)
			printf("%c", a[i][j]);
		printf("\n");
	}
	return 0;
}
