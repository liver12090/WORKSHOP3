#include<stdio.h>
double fibo(int n)
{
	int t1=1,t2=1,f;
	for(int i=3;i<=n;i++)
	{
		f=t1+t2;
		t1=t2;
		t2=f;		
	}
	return f;
}
int main()
{
	int n;
	do {printf("Enter n: ");scanf("%d",&n);	}
	while (n<1);
	if (n==1||n==2) printf("The value at the %d position in Fibonacci sequence is 1",n);
	printf("The value at the %d position in Fibonacci sequence is %.0lf",n,fibo(n));
	return 0;
}