#include<stdio.h>
int main() {
	
	double v=0, x = 3.1415926535, r=0, h=0;
	int i;
	while(1)
	{	
		printf("1-Ball\n2-Cylinder\n3-Cone\nother-Exit\nPlease enter your command:\n");
		scanf("%d",&i);
		switch (i) {
		case 1:
			{
				printf("Please enter the radius:\n");
				scanf("%lf", &r); 
				printf("%.2lf\n", x * 4 / 3 * r * r * r);
				break;
			}
			
		case 2:
			{
				printf("Please enter the radius and the height:\n");
				scanf("%lf%lf", &r, &h);
				v = x * r * r * h;
				printf("%.2lf\n", v);
				break;
			} 
		case 3:
			{
				printf("Please enter the radius and the height:\n");
				scanf("%lf%lf", &r, &h);
				v = x * r * r * h / 3;
				printf("%.2lf\n", v);
				break;
			}
			default:return 0;
			
		}
		
		
	}
	return 0;
}
