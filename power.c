#include<stdio.h>
int power(int a,int b)
{
	if(b==1)
	{
		return a;
	}
	else
	{
		return (a*power(a,b-1));
	}
}
int main()
{
	int x,y;
	printf("Enter base and power respectively:");
	scanf("%d %d",&x,&y);
	printf("%d ",power(x,y));
}
