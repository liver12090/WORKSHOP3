#include<stdio.h>
int checkYear(int y)
{
	if(y%400==0||(y%4==0&&y%100!=0))
	return 1;
	return 0;
}
int validDate(int d,int m,int y)
{
	int maxD=31;
	if(d<1||d>31||m<1||m>12) return 0;
	if(m==4||m==6||m==9||m==11) maxD=30;
	else if (checkYear(y)) maxD=29;
	else maxD=28;
	return d<=maxD;
}
int main()
{
	int d,m,y;
	printf("Date: ");scanf("%d",&d);
	printf("Month: ");scanf("%d",&m);
	printf("Year: ");scanf("%d",&y);
	if (validDate(d,m,y))printf("%d/%d/%d is valid",d,m,y);
	else printf("%d/%d/%d is not valid",d,m,y);
	return 0;
}