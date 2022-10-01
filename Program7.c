#include<stdio.h>
int sumDigits(int n)
{
	int sum=0;
	do 
	{
		int i=n%10;
		n=n/10;
		sum+=i;
	}
	while(n>0);
	return sum;
}
int main()
{
	int n;
	do
	{
		printf("Enter n: "); scanf("%d",&n);
		if(n>=0) printf("Sum of digit(s) of n is: %d\n",sumDigits(n));
	}
	while(n>=0);
	return 0;
}