#include<stdio.h>
long long int factorial(int n)
{
	if (n==1) return 1;
	return n*factorial(n-1);
}
int main()
{
	int n;
	do {printf("Enter n: ");scanf("%d",&n);}
	while(n<0);
	if (n==0) printf(" Factorial of 0 is 1");
	printf("Factorial of %d = %lld",n,factorial(n));
	return 0;
}