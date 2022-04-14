 
#include<stdio.h>
int main()
{
	int n, g, s, i;
	int a[10]; 
	scanf("%d", &n);
	n = s;
	for (i = 0; i < 5; i++)
	{
		a[i] = n % 10;
		n = n / 10;

	}
	if (a[0] == a[4] && a[1] == a[3])
		printf("%d", s);
		else 
		printf("mooo");
	return 0;
}

