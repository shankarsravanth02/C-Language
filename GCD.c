#include<stdio.h>
int gcd(int num1,int num2)
{
	if (num1=0)
	{
		return num2;
	}
	if (num2==0)
	{
		return num1;
	}
	if (num1==num2)
	{
		return num1;
	}
	if (num1>num2)
	{
		return gcd(num1-num2,num2);
	}
	else
	{
	return gcd(num1,num2-num1);
    }
}
int main()
{
	int a,b;
	printf("Enter numbers: ");
	scanf("%d %d",&a,&b);
	printf("gcd is: %d ",gcd(a,b));
	return 0;
}
