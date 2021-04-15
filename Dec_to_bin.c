#include<stdio.h>
int convert(int dec)
{
	if(dec==0)
	{
		return 0;
	}
	else
	{
		return (dec%2+10*convert(dec/2));
	}
}
int main()
{
	int x;
	printf("enter decimal number:");
	scanf("%d",&x);
	printf("%d ",convert(x));
}
