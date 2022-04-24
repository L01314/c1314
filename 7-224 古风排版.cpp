/*#include<iostream>
#include<cstring>
using namespace std;
int main() {
	int N, len = 0, i, j, x;
	char s[1100];
	memset(s, 0, 1100);
	scanf("%d", &N);
	getchar();
	while ((s[len] = getchar()) != '\n')
	{
		len++;
	}
	
	
	if (len % N != 0) {
		for (i = 0, x = len; i < N - len % N; i++)
			
			s[x++] = ' ';
	} else x = len;
	for (i = 0; i < N; i++) {
		for (j = x / N - 1; j >= 0; j--)
		{
			printf("%c", s[j * N + i]);
		}
		printf("\n");
	}
}
*/




#include<stdio.h>
#include<string.h>
int main() {
	int len, n, l;
	scanf("%d", &n);

	char str[1102];
	getchar();
	gets(str);
	len = strlen(str);
	l = len % n;
	if (l != 0) l = len / n + 1;
	else     l = len / n;
 
	int cnt = 0;
	char  s[101][101];
	for (int j = l-1; j >= 0; j--)
		for (int i = 0; i < n; i++) {
		s[i][j] = str[cnt++];
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < l; j++)
			printf("%c", s[i][j]);
		printf("\n");
	}
	return 0;
}
