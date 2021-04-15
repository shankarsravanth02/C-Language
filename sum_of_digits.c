#include<stdio.h>
int Sum_of_digits(int x)
{
	if(x==0)
	{
		return 0;
	}
	return (x%10+Sum_of_digits(x/10));
}
int main()
{
	int num;
	printf("enter number:");
	scanf("%d",&num);
	printf("Sum= %d",Sum_of_digits(num));
	return 0;
}
