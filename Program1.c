#include<stdio.h>
int isPrime(int n)
{
	for (int i = 2; i<= (int)n/2; i++)
	{
		if(n%i==0) return 0;
	}
	return 1;
}
int main()
{
	int n; 
	do 
	{
	printf("Nhap n lon hon hoac bang 2: "); 
	scanf("%d",&n); 
	}
	while (n<2);
	printf("Cac so nguyen to tu 2 den %d la: \n",n);
	for (int i = 2; i<=n;i++)
	{
		if (isPrime(i)) printf("%d ", i);
	}
	getchar();
	return 0;
}