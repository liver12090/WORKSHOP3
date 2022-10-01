#include<stdio.h>
int GCD(int value1, int value2)
{
	while(value1!=0 && value2!=0)
	{
		if(value1>value2) value1 = value1 % value2;
		else value2 = value2 % value1;
	} 
	if (value1==0) return value2;
	else return value1;
}
int LCM(int value1, int value2)
{
	return(value1*value2/GCD(value1,value2));
}
int main()
{
	int a,b;
	do
	{
		printf("Enter a: ");scanf("%d",&a);
		printf("Enter b: ");scanf("%d",&b);
	}
	while(a<=0 || b<=0);
	printf("GCD(%d;%d) = %d\n",a,b,GCD(a,b));
	printf("LCM(%d;%d) = %d",a,b,LCM(a,b));
	return 0;
}