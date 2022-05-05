//#include<stdio.h> 
//#include<math.h>
//double x1, ya, x2, y2, x3, y3, x4, y4, l1, l2, l3, l4, l5, s1, s2;
//double long_a(double a, double b, double c, double d) {
//	double chang;
//	chang = sqrt((a - c) * (a - c) + (b - d) * (b - d));
//	return chang;
//
//}
//double ss(double l1, double l2, double l3) {
//	int arce, cc = (l1 + l2 + l3) / 2;
//	arce = sqrt(cc * (cc - l1) * (cc - l2) * (cc - l3));
//	return arce;
//}
//int main() {
//	scanf("%lf %lf %lf %lf %lf %lf %lf %lf", &x1, &ya, &x2, &y2, &x3, &y3, &x4, &y4);
//	l1 = long_a(x1, ya, x2, y2);
//	l2 = long_a(x2, y2, x3, y3);
//	l3 = long_a(x3, y3, x4, y4);
//	l4 = long_a(x4, y4, x1, ya);
//	l1 = long_a(x4, y4, x2, y2);
//	s1 = ss(l1, l5, l4) + ss(l2, l3, l5);
//	s2 = 0.0015 * s1;
//	printf("%.2lf", s2);
//}


#include <stdio.h>
#include <math.h>
double d(double x1,double y1,double x2,double y2)
{
	double d;
	d=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
	return d;
}
double area(double L1,double L2,double L3)
{
	double p,area;
	p=0.5*(L1+L2+L3);
	area=sqrt(p*(p-L1)*(p-L2)*(p-L3));
	return area;
}
int main()
{
	double xA,yA,xB,yB,xC,yC,xD,yD;
	double AB,AD,BD,CD,BC;
	double area1,area2,sum=0,Ssum;
	scanf("%lf %lf %lf %lf %lf %lf %lf %lf",&xA,&yA,&xB,&yB,&xC,&yC,&xD,&yD);
	AB=d(xA,yA,xB,yB);
	AD=d(xA,yA,xD,yD);
	BD=d(xB,yB,xD,yD);
	CD=d(xC,yC,xD,yD);
	BC=d(xB,yB,xC,yC);
	//printf("%f %f %f %f %f \n",AB,AD,BD,CD,BC);
	area1=area(AB,AD,BD);
	area2=area(BD,CD,BC);
	//printf("%f %f\n",area1,area2);
	sum=area1+area2;
	Ssum=sum*0.0015;
	printf("%.2f",120000/Ssum);
	return 0;
}

