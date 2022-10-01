#include<stdio.h>
double makeDouble(int ip, int fr)
{
	double x=fr;
	while(x>1) x=x/10;
	if (ip<0) return ip-x;
	else return ip+x;
}
int main()
{
	int ip,fr;
	printf("Enter integral part: ");scanf("%d",&ip);
	do {printf("Enter fraction: ");scanf("%d",&fr);	}
	while(fr<0);
	printf("The number is: %lf",makeDouble(ip,fr));
	return 0;
}