#include<stdio.h>
int getRelPos(double x, double y, double r)
{
	double r2=r*r;
	double d2=x*x+y*y;
	if(d2<r2) return 1;
	if(d2==r2) return 0;
	else return -1;
}
int main()
{
	double x,y,r;
	printf("Nhap toa do (x,y)\n");
	printf("x = ");scanf("%lf",&x);
	printf("y = ");scanf("%lf",&y);
	do {printf("Nhap r: "); scanf("%lf",&r);}
	while (r<0);
	int result = getRelPos(x,y,r);
	if (result==1) printf("Diem (%lf,%lf) nam trong duong tron tam O(0;0) ban kinh %lf",x,y,r);
	if (result==0) printf("Diem (%lf,%lf) nam tren duong tron tam O(0;0) ban kinh %lf",x,y,r );
	else printf("Diem (%.3lf,%.3lf) nam ngoai duong tron tam O(0;0) ban kinh %.3lf",x,y,r );
	return 0;
}