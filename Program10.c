#include<stdio.h>
void printMinMaxDigit(int n)
{
	int min=9,max=0, digit;
	while(n>0)
	{
	digit=n%10;
	if(min>digit) min=digit;
	if(max<digit) max=digit;
	n=n/10;
	}
	printf("Min digit: %d\n",min);
	printf("Max digit: %d\n",max);
}
int main()
{
	int n;
	do 
	{
	printf("Enter n: ");scanf("%d",&n);
	printMinMaxDigit(n);
	}
	while(n<0);
	return 0;
}